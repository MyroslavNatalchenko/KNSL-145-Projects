#include <bits/stdc++.h>

using namespace std;

int main()
{
     string S;
     getline(cin,S);
     for (int i=0;i<S.size();i++)
     {
         if (S[i]=='w')
            S[i]='z';
         else if(S[i]=='z')
                 S[i]='w';
     }
     cout << S;
}
