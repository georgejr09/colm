// -*-pascal-*-
//
// STRESS TEST: exercises every IR construct the ragel-pascal backend must
// translate. Each section targets a specific grammar production.
//

program stress;

{$mode objfpc}

uses
  SysUtils;

%%{
	machine stress;
	write data;
}%%

function Run(const data: string): string;
var
  cs, p, pe, eof: integer;
  top: integer;
  stack: array[0..31] of integer;
  acc: integer;
  flag: boolean;
  res: string;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  eof := pe;
  top := 0;
  acc := 0;
  flag := false;
  res := '';

  %%{
		# --- actions exercising arithmetic, bitwise, shift, comparison ---
		action add      { acc := acc + 1; }
		action sub      { acc := acc - 1; }
		action mul      { acc := acc * 2; }
		action bitand   { acc := acc and 3; }
		action shl      { acc := acc shl 1; }
		action shr      { acc := acc shr 1; }
		action notop    { flag := not flag; }
		action cmp      { if acc > 0 then flag := true; }

		# --- a sub-machine called via fcall/fret ---
		sub := digit+ $!{ fhold; fret; };

		# --- main machine: a sequence of single-char commands ---
		main := (
			'a' @add |
			's' @sub |
			'm' @mul |
			'b' @bitand |
			'l' @shl |
			'r' @shr |
			'n' @notop |
			'c' @cmp |
			'f' @{ fcall sub; } |
			' ' |
			'\n'
		)*;

		write init;
		write exec;
	}%%

  if cs < stress_first_final then
    res := 'ERROR'
  else
    res := 'OK acc=' + IntToStr(acc) + ' flag=' + BoolToStr(flag, true);

  Result := res;
end;

begin
  WriteLn(Run('a a a'#10));
  WriteLn(Run('m m'#10));
  WriteLn(Run('l l l'#10));
  WriteLn(Run('n'#10));
  WriteLn(Run('f 123'#10));
end.
