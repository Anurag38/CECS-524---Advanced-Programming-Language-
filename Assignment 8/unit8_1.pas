{

                            Online Pascal Compiler.
                Code, Compile, Run and Debug Pascal program online.
Write your code in this editor and press "Run" button to execute it.

}


program unit8_1;
var
rate, factor : integer;

begin
  
  writeln('Enter the rate:');
  readln(rate);

  if ((rate = 1) or (rate = 2)) then
    factor := 2 * rate - 1

  else if ((rate = 3) or (rate = 5)) then
    factor := 3 * rate + 1

  else if (rate = 4) then
    factor := 4 * rate - 1

  else if ((rate = 6) or (rate = 7) or (rate = 8)) then
    factor := rate - 2

  else
    factor:=rate;

  writeln('Value of factor:');
  writeln(factor);
  
end.


