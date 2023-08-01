#include <iostream>

using namespace std;



int main()
{
    char sign,bit;
    int N=0,cnt=0;
    cin >> sign;
    while (cin >> bit)
    {
        cnt++;
        N = (N<<1) + bit -48;
    }
    if (sign == '1') N-=(1<<cnt);
    cout << N << '\n';
}
