var 
    N:longint;
    cnt:uint64;
    
    
    
function dig_N(N:byte):byte;
var cnt:byte;
begin
  if (N=1) 
  then cnt:=2;
  if (N=0) or (N=6) or (N=9)
  then cnt:=6;
  if (N=2) or (N=3) or (N=5)
  then cnt:=5;
  if N=4
  then cnt:=4;
  if N=7
  then cnt:=3;
  if N=8
  then cnt:=7;
  
  dig_N:=cnt;
end;
    

    
begin
   read(N);
   if N<0
   then begin
          cnt:=1;
          N:=abs(N);
   end
   else cnt:=0;
   
   while N>0 do
   begin
     cnt:=cnt+dig_n(N mod 10);
     N:=N div 10;
 
   end;
   
  
   
   writeln(cnt);
end.