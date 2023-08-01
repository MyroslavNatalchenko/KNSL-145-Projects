#include <bits/stdc++.h>

using namespace std;

int main()
{
     char S;
     int N,cnt=0,sum=0;
     cin >> N;
     for (int i=0;i<N;i++)
     {
         cin >> S;
         if (S>='0' && S<='9')
         {
             sum=sum+S-48;
             cnt++;
         }
     }
     cout << cnt << '\n' << sum;

}
