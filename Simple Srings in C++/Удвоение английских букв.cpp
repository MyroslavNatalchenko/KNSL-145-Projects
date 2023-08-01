#include <bits/stdc++.h>

using namespace std;

int main()
{
     string S;
     int start,stop;
     getline(cin,S);
     for(int i=0;i<S.size();i++)
     {
         if(isalpha(S[i]))
         {
             i++;
             S.insert(i,1,S[i-1]);
         }
     }
     cout << S;
}
