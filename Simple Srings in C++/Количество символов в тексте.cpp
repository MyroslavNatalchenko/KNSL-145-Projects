#include <bits/stdc++.h>

using namespace std;

int main()
{
     string S;
     int pos,cnt=0,start=0;
     getline(cin,S);
     while (S.find_first_of(' ',pos=start)<=S.size())
     {
         start=S.find_first_of(' ',pos=start)+1;
         cnt++;
     }
     cout << cnt;
}
