#include <iostream>

using namespace std;

void bit(int N)
{
    if (N>1) bit(N>>1);
    cout << (N&1);
}


int main()
{
    int N;


    while (cin >> N)
    {
        bit(N);
        cout << '\n';
    }

    return 0;
}
