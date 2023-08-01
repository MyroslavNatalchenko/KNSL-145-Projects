#include <bits/stdc++.h>

using namespace std;

struct drob
{
    int Numbers;
    int Denom;
};

bool comp(drob N1,drob N2)
{
    if (N1.Numbers*1.0/N1.Denom < N2.Numbers*1.0/N2.Denom)
        return true;
    return false;
}

void out_mas(drob m[], int N)
{
    for (int i=0; i<N; ++i)
        cout << m[i].Numbers << "/" << m[i].Denom << '\n';

}

void creat_drobi(drob m[], int&N, int Number)
{
    N=0;
    for (int i=2; i<=Number; ++i)
        for (int j=1; j<i; ++j)
            if (__gcd(i,j)==1)  // Встроеный НСД
            {
              m[N].Denom=i;
              m[N].Numbers=j;
              ++N;
            }

}


drob mas[100000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int Number,N;
    cin >> Number;
    creat_drobi(mas,N,Number);
    sort(mas,mas+N,comp);
    out_mas(mas,N);
    return 0;

}
