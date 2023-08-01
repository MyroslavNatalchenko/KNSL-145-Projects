#include <iostream>

using namespace std;

void bit(int N,int k)
{
    if (k>1) bit(N>>1,k-1);
    cout << (N&1);
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,k;
    cin >> N >> k;
    bit(N,k);
    return 0;
}
