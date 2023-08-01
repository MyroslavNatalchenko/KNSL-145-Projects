var a,b,c,x,y,z:longint;

procedure swap(var a,b:longint);
var c:longint;
begin
  c:=a;
  a:=b;
  b:=c;
end;


begin
   readln(a,b,c);
   readln(x,y,z);
   
   if a>b
   then swap(a,b);
   if a>c
   then swap(a,c);
   if b>c
   then swap(b,c);
   if x>y
   then swap(x,y);
   if x>z
   then swap(x,z);
   if y>z
   then swap(y,z);
  
   if (a = x) and (b = y) and (c = z)
   then writeln('Boxes are equal')
   else if (a > x) and (b > y) and (c > z)
        then writeln('The first box is larger than the second one')
        else if (a < x) and (b < y) and (c < z)
             then writeln('The first box is smaller than the second one')
             else writeln('Boxes are incomparable');
end.