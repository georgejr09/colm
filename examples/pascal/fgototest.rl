// -*-pascal-*-
//
// MINIMAL fgoto test.
//

program fgototest;

{$MODE DELPHI}

uses
  SysUtils;

%%{
        machine fgototest;
        write data;
}%%

function Run(const data: string): string;
var
  cs, p, pe: integer;
  acc: integer;
begin
  cs := 0;
  p := 1;
  pe := Length(data) + 1;
  acc := 0;

  %%{
                action add100 { acc := acc + 100; }

                main := 'g' @{ fgoto jump; };
                jump := 'z' @add100 '\n';

                write init;
                write exec;
        }%%

  if cs < fgototest_first_final then
    Result := 'ERR acc=' + IntToStr(acc)
  else
    Result := 'OK acc=' + IntToStr(acc);
end;

begin
  WriteLn(Run('gz'#10));
end.
