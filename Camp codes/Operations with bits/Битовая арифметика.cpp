#include <iostream>

using namespace std;

void bit(int N)
{
    if (N>1) bit(N/2);
    cout << (N&1);
}


int main()
{

    int N,k;
    cin >> N >> k;
    --k;
    cout << ((N>>k)&1) << '\n';
    cout << (N|(1<<k)) << '\n';
    cout << (N^(1<<k)) << '\n';
    cout << (N&(~((1<<(k+1))-1))) << '\n';
    cout << (N&((1<<(k+1))-1)) << '\n';
    return 0;
}
