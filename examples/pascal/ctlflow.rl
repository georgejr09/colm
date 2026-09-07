// -*-pascal-*-
//
// COMPLEX STRESS TEST: fgoto, fcall, fret, fhold, fentry, fbreak — the full
// control-flow suite. Mirrors the gotocallret.rl semantics but in Pascal.
//
// Grammar:
//   command := [a-z0-9] ' ' (alpha+ | digit+) '\n'
//   - a letter command expects an alpha arg
//   - a digit command expects a digit arg
//   - on a bad arg, fhold + fgoto garble_line (error recovery)
//

program ctlflow;

{$mode objfpc}

uses
  SysUtils;

%%{
        machine ctlflow;
        write data;
}%%

function Run(const data: string): string;
var
  cs, p, pe, eof: integer;
  top: integer;
  stack: array[0..31] of integer;
  comm: char;
  res: string;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  eof := pe;
  top := 0;
  comm := #0;
  res := '';

  %%{
                # Error machine: consume to end of line, then restart main.
                garble_line := (
                        (any-'\n')* '\n'
                ) >{ res := res + 'G'; } @{ fgoto main; };

                # Alpha arg: alpha+, on non-alpha hold and return.
                alp_comm := alpha+ $!{ fhold; fret; };

                # Digit arg: digit+, on non-digit hold and return.
                dig_comm := digit+ $!{ fhold; fret; };

                # Choose which machine to call based on the command char.
                action comm_arg {
                        if comm >= 'a' then
                                fcall alp_comm;
                        else
                                fcall dig_comm;
                }

                # A command: [a-z0-9] ' ' <arg> '\n'
                command = (
                        [a-z0-9] @{ comm := fc; } ' ' @comm_arg '\n'
                ) @{ res := res + 'C'; };

                # Any number of commands; on error, garble the line.
                main := command* $!{ fhold; fgoto garble_line; };

                write init;
                write exec;
        }%%

  if cs < ctlflow_first_final then
    res := res + 'ERR'
  else
    res := res + 'OK';

  Result := res;
end;

begin
  WriteLn(Run('a abc'#10));      // alpha command + alpha arg -> C
  WriteLn(Run('1 123'#10));      // digit command + digit arg -> C
  WriteLn(Run('a 123'#10));      // alpha command + digit arg -> garble -> G
  WriteLn(Run('1 abc'#10));      // digit command + alpha arg -> garble -> G
  WriteLn(Run('a abc'#10'1 123'#10));  // two commands -> CC
end.
