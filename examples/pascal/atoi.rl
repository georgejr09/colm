// -*-pascal-*-
//
// Convert a string to an integer (Pascal host).
//

program atoi;

{$mode objfpc}

uses
  SysUtils;

%%{
	machine atoi;
	write data;
}%%

function Atoi(const data: string): integer;
var
  cs, p, pe: integer;
  neg: boolean;
  val: integer;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  neg := false;
  val := 0;

  %%{
		action see_neg   { neg := true; }
		action add_digit { val := val * 10 + (fc - Ord('0')); }

		main :=
			( '-'@see_neg | '+' )? ( digit @add_digit )+
			'\n'?
			;

		write init;
		write exec;
	}%%

  if neg then
    val := -val;

  Result := val;
end;

begin
  WriteLn(Atoi('123'));
end.
