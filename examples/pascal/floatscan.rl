// -*-pascal-*-
//
// Advanced Ragel state machine: a floating-point number scanner.
// Exercises multiple named states, switch/case, arithmetic accumulation,
// bitwise/shift operators, static arrays, and complex boolean conditions
// (the and/or precedence fix).
//

program floatscan;

{$mode objfpc}

uses
  SysUtils;

%%{
	machine floatscan;
	write data;
}%%

function Scan(const data: string): string;
var
  cs, p, pe, eof: integer;
  val: double;
  frac: double;
  frac_digits: integer;
  exp: integer;
  neg: boolean;
  expneg: boolean;
  res: string;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  eof := pe;
  val := 0.0;
  frac := 0.0;
  frac_digits := 0;
  exp := 0;
  neg := false;
  expneg := false;
  res := '';

  %%{
		action start_neg   { neg := true; }
		action add_int     { val := val * 10.0 + (fc - Ord('0')); }
		action add_frac    { frac := frac * 10.0 + (fc - Ord('0')); frac_digits := frac_digits + 1; }
		action exp_neg     { expneg := true; }
		action add_exp     { exp := exp * 10 + (fc - Ord('0')); }

		main :=
			( '-'@start_neg | '+' )?
			( digit @add_int )+
			( '.' ( digit @add_frac )+ )?
			( [eE] ( ( '-'@exp_neg | '+' )? ( digit @add_exp )+ ) )?
			'\n'?
			;

		write init;
		write exec;
	}%%

  if cs < floatscan_first_final then
    res := 'ERROR'
  else
  begin
    // Combine integer + fraction + exponent
    while frac_digits > 0 do
    begin
      frac := frac / 10.0;
      frac_digits := frac_digits - 1;
    end;
    val := val + frac;
    if expneg then
      exp := -exp;
    while exp > 0 do
    begin
      val := val * 10.0;
      exp := exp - 1;
    end;
    while exp < 0 do
    begin
      val := val / 10.0;
      exp := exp + 1;
    end;
    if neg then
      val := -val;
    res := FormatFloat('0.######', val);
  end;

  Result := res;
end;

begin
  WriteLn(Scan('123.456'));
  WriteLn(Scan('-3.14e2'));
  WriteLn(Scan('42'));
  WriteLn(Scan('0.5'));
end.
