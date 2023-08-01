#include <bits/stdc++.h>

using namespace std;

int main()
{
     string S;
     int pos,cnt=0,start=0,needable;
     getline(cin,S);
     cin >> needable;
     while ((S.find_first_of(' ',pos=start)<=S.size()) && (cnt!=needable))
     {
         start=S.find_first_of(' ',pos=start)+1;
         cnt++;
     }
     if (cnt==needable)
        cout << start;
     else
        cout << 0;
}
