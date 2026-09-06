// -*-pascal-*-
//
// Complex Ragel state machine: demonstrates fcall/fret/fgoto/fhold.
// A command parser: each line is "command arg", where the command is a
// letter (arg = letters) or a digit (arg = digits). Uses call/return to
// delegate arg scanning, and fgoto to recover from garbled lines.
//

program cmdparse;

{$mode objfpc}

uses
  SysUtils;

%%{
	machine cmdparse;
	write data;
}%%

function Parse(const data: string): string;
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
		) >{ res := res + 'garbled;' } @{ fgoto main; };

		# Scan a run of letters; on anything else, hold and return.
		alp_comm := alpha+ $!{ fhold; fret; };

		# A command: a letter, a space, then a run of letters (via fcall).
		command =
			[a-z] ' ' @{ fcall alp_comm; } '\n'
			@{ res := res + 'ok;' };

		# Any number of commands; on error, garble the line.
		main := command* $!{ fhold; fgoto garble_line; };

		write init;
		write exec;
	}%%

  if cs < cmdparse_first_final then
    res := res + 'ERROR'
  else
    res := res + 'DONE';

  Result := res;
end;

begin
  WriteLn(Parse('a hello'#10'b 123'#10));
  WriteLn(Parse('x bad!'#10'c world'#10));
end.
