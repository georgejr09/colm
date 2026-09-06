// -*-pascal-*-
//
// STRESS TEST 3: hex literals, char comparisons (fc), string literals,
// and cast expressions.
//

program stress3;

{$mode objfpc}

uses
  SysUtils;

%%{
	machine stress3;
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
		action hexval { acc := acc + (fc - Ord('0')); }
		action is_a   { if fc = Ord('a') then acc := acc + 100; }

		# Hex digit range and a literal 'a' check.
		main := (
			[0-9a-f] @hexval |
			'a' @is_a |
			'\n'
		)*;

		write init;
		write exec;
	}%%

  if cs < stress3_first_final then
    res := 'ERROR'
  else
    res := 'OK acc=' + IntToStr(acc);

  Result := res;
end;

begin
  WriteLn(Run('a5'#10));
  WriteLn(Run('ff'#10));
end.
