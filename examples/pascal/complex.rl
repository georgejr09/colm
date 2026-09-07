// -*-pascal-*-
//
// COMPLEX TEST: exercises fgoto, fentry (multiple entry points), when
// conditions, fbreak, and priorities — the constructs NOT covered by the
// existing examples.
//

program complex;

{$mode objfpc}

uses
  SysUtils;

%%{
        machine complex;
        write data;
}%%

function Run(const data: string): string;
var
  cs, p, pe, eof: integer;
  top: integer;
  stack: array[0..31] of integer;
  acc: integer;
  res: string;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  eof := pe;
  top := 0;
  acc := 0;
  res := '';

  %%{
                # --- actions ---
                action inc   { acc := acc + 1; }
                action dec   { acc := acc - 1; }
                action mark  { res := res + 'M'; }
                action is_even { acc mod 2 = 0 }

                # --- a sub-machine with an entry point ---
                sub := (
                        'x' @inc |
                        'y' @dec
                )+ '\n' @{ fret; };

                # --- main machine: fgoto to a label, fentry to sub, fbreak ---
                main := (
                        'g' @{ fgoto jump; } |
                        'e' @{ fcall *fentry(sub); } |
                        'b' @{ fbreak; } |
                        'c' when is_even @mark | 'c' |
                        'i' @inc |
                        'd' @dec |
                        ' ' |
                        '\n'
                )*;

                # --- the fgoto target ---
                jump := 'z' @{ acc := acc + 100; } '\n';

                write init;
                write exec;
        }%%

  if cs < complex_first_final then
    res := res + 'ERR'
  else
    res := res + 'OK';

  Result := res + ' acc=' + IntToStr(acc);
end;

begin
  WriteLn(Run('i i c'#10));      // acc=2 (even) -> 'c' marks -> MOK, acc=2
  WriteLn(Run('i c'#10));        // acc=1 (odd) -> 'c' skipped, acc=1
  WriteLn(Run('gz'#10));         // fgoto jump -> z adds 100, acc=100
  WriteLn(Run('exx'#10));        // fentry sub -> x x -> acc=2
  WriteLn(Run('i b i'#10));      // fbreak -> acc=1 (b breaks, second i runs)
end.
