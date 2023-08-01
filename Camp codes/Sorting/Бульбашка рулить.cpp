#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}


int bubble(int m[],int N)
{
    int cnt=0;
    for (int i=1;i<N;++i)
    {
        for (int j=0;j<N-i;++j)
        {
         if (m[j]>m[j+1])
         {
             swap(m[j],m[j+1]);
             cnt=cnt+1;
         }
        }
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
    cout << bubble(mas,N) << '\n';
    out_mas(mas,N);



}
