
#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}

long long mirrored(long long N)
{
    long long ans=0;
    while (N!=0)
    {
        ans=ans*10 + N%10;
        N=N/10;
    }
    return ans;
}

int mas[1000002];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,i=0;
    inp_mas(mas,N);
    mas[N]=11;

    while (mas[i]!=mirrored(abs(mas[i])))
           ++i;

    if (i==N)
        cout << -1;
    else cout << mas[i] << ' ' << i+1;

    return 0;
}
