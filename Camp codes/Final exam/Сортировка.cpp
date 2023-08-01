#include <bits/stdc++.h>

using namespace std;


bool comp(int a, int b)
{
    if (a/100 < b/100) return true;
    if (a/100 > b/100) return false;
    if (a%100/10 < b%100/10) return false;
    if (a%100/10 > b%100/10) return true;
    if (a%10 < b%10) return true;
    return false;
}

void out_mas(int mas[], int  N)
{
    for (int i=0; i<N; i++)
        cout << mas[i] << ' ';
}

int m[1000000];
int main()
{
    int N=0;
    while (cin >> m[N])
          ++N;

    sort(m,m+N,comp);

    out_mas(m,N);
    return 0;
}
