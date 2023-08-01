#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
   cin >> N;
   for (int i=1; i<=N; i++)
        cin >> mas[i];
}

void out_mas(int mas[], int  N)
{
    for (int i=1; i<=N; i++)
        cout << mas[i] << ' ';

   cout << '\n';
}

void restore_heap(int m[], int last_ind, int father)
{
    int minson;
    while (2*father <= last_ind)
    {
        minson=2*father;
        if (minson+1<=last_ind && m[minson]>m[minson+1])
            ++minson;
        if (m[father]>m[minson])
        {
            swap(m[father],m[minson]);
            father=minson;
        }
        else father=last_ind;
    }
}


void heapsort(int m[],int N)
{
    for (int i=N/2; i>0; --i)
        restore_heap(m,N,i);
    out_mas(m,N);
    for (int i=N; i>1; --i)
    {
        swap(m[1],m[i]);
        restore_heap(m,i-1,1);
    }
    out_mas(m,N);
}

int mas[1000000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;

    inp_mas(mas,N);
    heapsort(mas,N);

    return 0;



}
