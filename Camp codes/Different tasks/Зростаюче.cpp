
#include <bits/stdc++.h>

using namespace std;

int mas[1000002];

bool not_increasing(long long N)
{
    N=abs(N);
    int last_dig=N%10;
    N=N/10;
    while (last_dig<=N%10 && N>0)
    {
        last_dig=N%10;
        N=N/10;
    }

    if (N==0) return true;
    return false;
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,cnt;
    cnt=0;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> mas[i];
    for (int i=0;i<N;i++)
    {
        if (not_increasing(mas[i]))
        {
            cout << mas[i] << ' ';
            cnt=cnt+1;
        }
    }

    if (cnt==0)
        cout << -1;

    return 0;
}
