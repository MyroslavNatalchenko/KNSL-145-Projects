#include <bits/stdc++.h>

using namespace std;

void bin(int N)
{
    if (N>3) bin(N>>1);
    cout<<((N&1)? 7:1 );
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    N++;
    bin(N);
    return 0 ;

}
