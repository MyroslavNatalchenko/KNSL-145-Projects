#include <bits/stdc++.h>

using namespace std;

int Min_el(int m[],int N)
{
    int etalon=m[0];
    for(int i=1;i<N;++i)
        if (m[i]<etalon)
           etalon=m[i];
    return etalon;
}


int Max_el(int m[],int N)
{
    int etalon=m[0];
    for(int i=1;i<N;++i)
        if (m[i]>etalon)
           etalon=m[i];
    return etalon;
}

void inp_mas(int m[],int&N)
{
    int A;
    cin >> N >> A;
    for (int i=0;i<N;i++)
        cin >> m[i];
}

int main()
{
    freopen("confuse.dat", "r", stdin);
    freopen("confuse.sol", "w", stdout);
    int m[10000],N;
    inp_mas(m,N);
    long long reas=Max_el(m,N);
    long long res=reas-Min_el(m,N);
    cout<<res<<'\n';
    return 0;
}
