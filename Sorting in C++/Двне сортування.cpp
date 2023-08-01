#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}

bool comp(int a, int b)
{
    if (a%10 > b%10) return true;
    if (a%10 < b%10) return false;
    if (a <= b) return false;
    return true;
}

void bubble_sort(int m[],int N)
{
    for (int i=1;i<N;++i)
       for (int j=0;j<N-i;++j)
         if (comp(m[j],m[j+1]))
             swap(m[j],m[j+1]);
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
    int N, mas[100000];
    inp_mas(mas,N);
    bubble_sort(mas,N);
    out_mas(mas,N);
    return 0;
}
