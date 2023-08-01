#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}


int Selection(int m[],int N)
{
    int etalon,cnt=0,N0,j;
    N0=0;
    for (int i=0;i<=N-1;++i)
    {
        etalon=i;
        for (int j=i+1;j<N;++j)
         if (m[j] >  m[etalon])
             etalon=j;
        if (i!=etalon)
        {
            if (N0 == i)
            {
               cnt=cnt+1;
               N0=etalon;
            }
            else if (N0 == etalon)
                 {
                    cnt=cnt+1;
                    N0=i;
                 }
        }
        swap(m[i],m[etalon]);
    }

   return cnt;
}

void out_mas(int mas[], int  N)
{
    for (int i=0; i<N; i++)
        cout << mas[i] << ' ';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, mas[10000];

    inp_mas(mas,N);
    cout << Selection(mas,N) << '\n';
    out_mas(mas,N);



}
