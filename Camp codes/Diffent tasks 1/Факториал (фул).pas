var N,dilnik,cnt:longint;

begin
  cnt:=0;
  readln(N);
  dilnik:=5;
  while dilnik<=n do
  begin
     cnt:=cnt + (n div dilnik);
     dilnik:=dilnik*5;
  end;
  
  writeln(cnt);
end.