function prime(var N:longword):boolean;
var i:longword;
begin
   if N<2
   then prime:=False
   else if N<4
        then prime:=True
        else if N mod 2 = 0
             then prime:=False 
             else begin
                    i:=3;
                    while (i <= sqrt(N)) and (N mod i <> 0) do
                          i:=i+2;
                    if n mod i = 0
                    then prime:=False
                    else prime:=True;
             end;
end;

var mas:array [1..1000000] of longint;
    N,Num,i:longint;
    sum_dig,cnt:longword;
    
    
    
    begin
       read(N);
       for i:=1 to N do
           read(mas[i]);
       sum_dig:=0;
       cnt:=0;
       for i:=1 to N do
       begin
         Num:=Abs(mas[i]);
         while Num > 0 do
         begin
            sum_dig:=sum_dig + Num mod 10;
            Num:=Num div 10;
         end;
         
         if prime(sum_dig)
         then begin
              write(mas[i],' ');
              inc(cnt);
         end;
         
         sum_dig:=0;
       end;
       
       if cnt=0
       then write(-1);
       
    end.