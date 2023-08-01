#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
   int i=0;
   while (cin >> mas[i]) ++i;
   N=i;
}

void out_mas(int mas[], int  N)
{
    for (int i=0; i<N; i++)
        cout << mas[i] << ' ';
}

int test_arefmet(int mas[], int N)
{
    int d=mas[1]-mas[0],i=2,cnt=2;
    while (d == mas[i]-mas[i-1] && i <=N)
    {
         ++cnt;
         ++i;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, mas[100000];
    inp_mas(mas,N);
    sort(mas,mas+N);
    if (test_arefmet(mas,N) == N)
       cout << "YES";
    else cout << "NO";
}
