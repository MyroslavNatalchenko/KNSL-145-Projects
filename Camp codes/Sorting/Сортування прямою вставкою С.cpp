#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}


void Insertion(int m[],int N)
{
    int etalon,j;
    for (int i=1;i<N;++i)
    {
       etalon=m[i];
       j=i-1;
       while (m[j]>etalon && j>=0)
       {
           m[j+1]=m[j];
           --j;
       }
       m[j+1]=etalon;
    }


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
    for (int i=0; i<N; ++i)
    {
        Insertion(mas,i+1);
        out_mas(mas,i+1);
        cout << '\n';
    }


}
