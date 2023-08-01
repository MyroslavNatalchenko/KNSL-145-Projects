#include <bits/stdc++.h>

using namespace std;

int main()
{
     char S;
     cin >> S;
     if (int(S)>=97)
         cout << char(S-32);
     else
         cout << char(S+32);

}
