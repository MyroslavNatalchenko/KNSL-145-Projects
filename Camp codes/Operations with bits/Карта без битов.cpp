#include <iostream>

using namespace std;

void translate(int N)
{
    if (N>1) translate(N/2);
    cout << (N&1);
}


int main()
{
    int sum=0,sum_find=0,N,elem,cnt=1;
    cin >> N;
    for (int i=1;i <=N; ++i)
    {
        sum=sum+cnt;
        ++cnt;
    }

    for (int i=1;i <N; ++i)
    {
        cin >> elem;
        sum_find=sum_find+elem;
    }

    cout << sum - sum_find;
    return 0;
}
