#include <bits/stdc++.h>

using namespace std;

int cnt1(int N)
{
    int cnt=0;
    while(N!=0)
    {
        if (N&1==1) ++cnt;
        N=N>>1;
    }
    return cnt;
}

int cnt_all(int N)
{
    int cnt=0;
    while(N!=0)
    {
        ++cnt;
        N=N>>1;
    }
    return cnt;
}

int main()
{
    int N;
    cin>>N;
    int cnt0=cnt_all(N)-cnt1(N);
    int min_N=(1<<cnt1(N))-1;
    int max_N=(min_N<<cnt0);
    cout<<(max_N-min_N);
    return 0;
}
