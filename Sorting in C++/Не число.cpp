#include <bits/stdc++.h>

using namespace std;

void inp_mas(long long mas[], int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}

long long minimal(long long mas[], int  N)
{
    long long S=1;
    for (int i=0; i<N; i++)
    {
      if (mas[i] > S)
         return S;
      S=S+mas[i];
    }
    return S;
}
long long mas[100000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    inp_mas(mas,N);
    sort(mas,mas+N);
    cout << minimal(mas,N);
    return 0;
}
