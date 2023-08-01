#include <bits/stdc++.h>

using namespace std;

int main()
{
     string S;
     int start,stop;
     getline(cin,S);
     cin >> start >> stop;
     S.erase(start-1,stop-start+1);
     cout << S;
}
