// -*-pascal-*-
//
// STRESS TEST 2: longest-match scanner (match_stmt), fc/fpc, hex, strings.
//

program stress2;

{$MODE DELPHI}

uses
  SysUtils;

%%{
	machine stress2;
	write data;
}%%

function Run(const data: string): string;
var
  cs: integer;
  p, pe, eof: PChar;
  ts, te: PChar;
  act: integer;
  res: string;
begin
  cs := 0;
  p := PChar(data);
  pe := p + Length(data);
  eof := pe;
  ts := nil;
  te := nil;
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
