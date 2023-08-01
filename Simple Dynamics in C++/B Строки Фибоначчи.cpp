#include <iostream>

long long fibonachi(int N)
{
    long long mas[46]={1,1,2};
    for (int i=3;i<=N;i++)
        mas[i]=mas[i-1]+mas[i-2];
    return mas[N];
}

char res(int N,int K)
{
    if (N==0)
        return 'a';
    if (N==1)
        return 'b';
    if (K <= fibonachi(N-2))
        return res(N-2,K);
    else
        return res(N-1,K-fibonachi(N-2));

}

using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i=0;i<T;i++)
    {
        int N,K;
        cin >> N >> K;
        cout << res(N,K) << '\n';
    }
}
