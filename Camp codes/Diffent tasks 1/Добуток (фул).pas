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

var N:longword;
    dilnik:word;
    
    
    begin
       read(N);
       dilnik:=2;
       while (dilnik*dilnik <= N) do
       begin
          if N mod dilnik = 0
          then begin
                  write(dilnik,'*');
                  N:=N div dilnik;
          end
          else inc(dilnik);
       end;
       
       write(N);
    end.
    
    