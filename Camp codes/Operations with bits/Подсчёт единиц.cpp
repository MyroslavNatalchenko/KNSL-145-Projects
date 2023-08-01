#include <iostream>

using namespace std;

void bit(long long N, long long &cnt)
{
    if (N>1) bit(N/2,cnt);
    {
        if (N&1 == 1)
           ++cnt;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long N,cnt=0;
    cin >> N;
    bit(N,cnt);
    cout << cnt;
    return 0;
}
