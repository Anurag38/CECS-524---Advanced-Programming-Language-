{

                            Online Pascal Compiler.
                Code, Compile, Run and Debug Pascal program online.
Write your code in this editor and press "Run" button to execute it.

}


program Quadratic;
var 
    a, b, c: integer;
    d, x1, x2: real;

begin

    writeln('Enter the co-efficient of x^2, x and the constant: ');
    readln(a,b,c);
    
    while ((a <> 0) or (b <> 0) or (c <> 0))   do
    
    begin
        writeln('The co-efficients you entered are ', a, ' ', b, ' ', c);
        
        d:= (b*b) - (4*a*c);
        writeln('D = ', d);
        
        if( d > 0 ) then
          begin
          writeln('First Root, x1 = ', ((-b) + Sqrt(d)) / (2*a));
          writeln('Second Root, x2 = ', ((-b) - Sqrt(d)) / (2*a));
          end
       
        else if( d < 0 ) then
          begin
          writeln('First Root, x1 = ', ((-b) / (2*a)), ' + i', Sqrt(-d) / (2*a));
          writeln('Second Root, x2 = ', ((-b) / (2*a)), ' - i', Sqrt(-d) / (2*a));
          end
        
        else
          begin
          writeln('Roots, x1 = ', (-b) / (2*a));
          end;
          
        writeln('Enter the co-efficient of x^2, x and the constant: ');
        
        readln(a,b,c);
    
    end;
    
end.

