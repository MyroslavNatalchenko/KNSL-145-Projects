#include <bits/stdc++.h>

using namespace std;

int main()
{
     string S;
     int start,stop;
     getline(cin,S);
     for(int i=0;i<S.size();i++)
     {
         if(S[i]=='z')
         {
             i++;
             S.insert(i,1,'z');
         }
     }
     cout << S;
}
