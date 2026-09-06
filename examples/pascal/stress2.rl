// -*-pascal-*-
//
// STRESS TEST 2: longest-match scanner (match_stmt), fc/fpc, hex, strings.
//

program stress2;

{$mode objfpc}

uses
  SysUtils;

%%{
	machine stress2;
	write data;
}%%

function Run(const data: string): string;
var
  cs, p, pe, eof: integer;
  ts, te: integer;
  act: integer;
  res: string;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  eof := pe;
  ts := 0;
  te := 0;
  act := 0;
  res := '';

  %%{
		action tok_word  { res := res + 'W'; }
		action tok_num   { res := res + 'N'; }
		action tok_ws    { res := res + '_'; }
		action tok_other { res := res + '?'; }

		main := |*
			( alpha ( alpha | digit )* ) => tok_word;
			( digit+ ) => tok_num;
			( space+ ) => tok_ws;
			( any ) => tok_other;
		*|;

		write init;
		write exec;
	}%%

  if cs < stress2_first_final then
    res := res + ' ERROR'
  else
    res := res + ' OK';

  Result := res;
end;

begin
  WriteLn(Run('abc 123 def'));
  WriteLn(Run('x + y'));
end.
