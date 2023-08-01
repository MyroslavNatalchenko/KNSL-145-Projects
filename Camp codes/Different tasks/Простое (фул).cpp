
#include <bits/stdc++.h>

using namespace std;


bool prime(int N)
{
    if (N<2) return false;
    for (int i=2;i<=sqrt(N);++i)
    {
        if(N%i==0) return false;
    }
    return true;
}

int sum_dig(int N)
{
    int sum_dig=0;
    while (N > 0)
        {
            sum_dig=sum_dig + N%10;
            N=N/10;
        }

    return sum_dig;
}


int main()
{
    int mas[100000];
    int N,Num;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> mas[i];
    int cnt=0;
    for (int i=0;i<N;i++)
    {
        Num=abs(mas[i]);
        if (prime(sum_dig(Num)))
        {
            cout << mas[i] << ' ';
            cnt=cnt+1;
        }
    }

    if (cnt==0)
    {
        cout << "-1";
    }
    return 0;
}
