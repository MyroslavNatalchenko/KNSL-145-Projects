#include <iostream>

using namespace std;

int main()
{
    int cnt,N,dilnik;
    cin >> N;
    dilnik=5;
    cnt=0;

    while (dilnik <= N)
    {
        cnt=cnt + (N/dilnik);
        dilnik=dilnik*5;
    }

    cout << cnt;

    return 0;

}
