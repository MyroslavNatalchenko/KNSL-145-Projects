
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



int main()
{
    int mas[100000];
    int N,Num,cnt;
    cin >> N;
    cnt=0;
    mas[0]=3;
    for (int i=1;i<=N;i++)
        cin >> mas[i];

    int i=N;
    while (i>=0 && !prime(mas[i]))
           --i;


    if (i==0)
    {
        cout << -1;
    }
    else {
        cout << mas[i] << ' ' << i;
    }




    return 0;
}
