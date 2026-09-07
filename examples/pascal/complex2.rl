// -*-pascal-*-
//
// COMPLEX TEST 2: action-expansion stress. Exercises the FULL action-operator
// set (>, $, %, <, @, ~, *) plus fnext and fexec ? the constructs NOT covered
// by the existing examples. Many DISTINCT actions force the -G1/-G2/-T1/-F1
// "expanded actions" codegen to inline each action into the dispatch.
//
// Grammar: a tiny expression evaluator over single-digit integers.
//   expr := term ( '+' term | '-' term )* '\n'
//   term := digit
// Actions track: value, sign, and a trace string.

program complex2;

{$MODE DELPHI}

uses
  SysUtils;

%%{
        machine complex2;
        write data;
}%%

function Run(const data: string): string;
var
  cs, p, pe, eof: integer;
  top: integer;
  stack: array[0..31] of integer;
  val: integer;
  sign: integer;
  trace: string;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  eof := pe;
  top := 0;
  val := 0;
  sign := 1;
  trace := '';

  %%{
                # --- many distinct actions (forces action expansion) ---
                action start_val { val := 0; sign := 1; }
                action push_digit { val := val * 10 + (fc - Ord('0')); }
                action set_plus   { sign := 1; }
                action set_minus  { sign := -1; }
                action apply_sign { val := val * sign; }
                action trace_d    { trace := trace + 'd'; }
                action trace_p    { trace := trace + 'p'; }
                action trace_m    { trace := trace + 'm'; }
                action trace_e    { trace := trace + 'e'; }
                action trace_n    { trace := trace + 'n'; }
                action trace_s    { trace := trace + 's'; }

                # --- a sub-machine called via fnext (deferred jump) ---
                # 'x' sets the next state to the 'skip' machine.
                skip := ( any-'\n' )* '\n' @{ trace := trace + 'S'; };

                # --- the main machine ---
                #   >  = entering action (start_val)
                #   $  = all-transition action (trace_s on every char)
                #   %  = leaving action (trace_e on leaving a term)
                #   </ = EOF action (trace_n at end)
                #   @  = to-state action (trace_d on digit)
                #   >~ = to-state action (trace_p/trace_m on +/-)
                #   >* = from-state action (trace_s on leaving a state)
                main := (
                        'x' @{ fnext skip; } |
                        digit >start_val @trace_d $trace_s %trace_e |
                        '+' >~trace_p |
                        '-' >~trace_m |
                        ' ' |
                        '\n'
                )* </trace_n;

                write init;
                write exec;
        }%%

  if cs < complex2_first_final then
    trace := trace + 'ERR'
  else
    trace := trace + 'OK';

  Result := trace + ' val=' + IntToStr(val);
end;

begin
  WriteLn(Run('1+2-3'#10));   // digits traced, val computed
  WriteLn(Run('xabc'#10));    // fnext -> skip machine
  WriteLn(Run(''#10));        // empty input, EOF action
end.
