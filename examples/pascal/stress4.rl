// -*-pascal-*-
//
// STRESS TEST 4: hex literals, string literals, and cast in expressions.
//

program stress4;

{$mode objfpc}

uses
  SysUtils;

%%{
	machine stress4;
	write data;
}%%

function Run(const data: string): string;
var
  cs, p, pe, eof: integer;
  acc: integer;
  res: string;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  eof := pe;
  acc := 0;
  res := '';

  %%{
		action add_hex { acc := acc + 1; }

		# A hex literal range and a string literal.
		main := (
			[0-9a-fA-F] @add_hex |
			'hello' |
			'\n'
		)*;

		write init;
		write exec;
	}%%

  if cs < stress4_first_final then
    res := 'ERROR'
  else
    res := 'OK acc=' + IntToStr(acc);

  Result := res;
end;

begin
  WriteLn(Run('abc123'#10));
  WriteLn(Run('hello'#10));
end.
