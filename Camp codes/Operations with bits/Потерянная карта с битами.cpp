#include <iostream>

using namespace std;

int xor_n(int N)
{
    int result=1;
    for (int i=2; i<= N; ++i)
        result=result^i;

    return result;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,card,lost_card;
    cin >> N;
    lost_card=xor_n(N);
    for (int i=1; i<N; ++i)
    {
        cin >> card;
        lost_card=lost_card^card;
    }
    cout << lost_card;
}
