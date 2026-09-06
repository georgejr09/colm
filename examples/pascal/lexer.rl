// -*-pascal-*-
//
// Advanced Ragel state machine: a small lexer that tokenizes a line into
// identifiers, integers, and operators. Exercises multiple states, actions,
// and error handling.
//

program lexer;

{$mode objfpc}

uses
  SysUtils;

%%{
	machine lexer;
	write data;
}%%

type
  TTokenKind = (tkIdent, tkInt, tkOp, tkError);

function Lex(const data: string): string;
var
  cs, p, pe, eof: integer;
  ts, te: integer;
  act: integer;
  kind: TTokenKind;
  res: string;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  ts := 0;
  te := 0;
  act := 0;
  res := '';

  %%{
		action mark_start { ts := p; }
		action mark_end   { te := p; }
		action ident      { kind := tkIdent; }
		action integer    { kind := tkInt; }
		action operator   { kind := tkOp; }
		action error      { kind := tkError; }

		ident   = ( alpha ( alpha | digit )* ) >mark_start %mark_end @ident;
		integer = ( digit+ ) >mark_start %mark_end @integer;
		op      = ( '+' | '-' | '*' | '/' ) >mark_start %mark_end @operator;

		main := (
			ident   |
			integer |
			op      |
			space+  |
			( any ) >mark_start %mark_end @error
		)*;

		write init;
		write exec;
	}%%

  if cs < lexer_first_final then
    res := 'ERROR'
  else
    res := 'OK';

  Result := res;
end;

begin
  WriteLn(Lex('abc 123 + def'));
end.
