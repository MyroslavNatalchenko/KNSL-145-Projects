#include <bits/stdc++.h>

using namespace std;
int main()
{
    int N,mas[101];
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> mas[i];
    sort(mas,mas+N);
    int length[101]={0,mas[1]-mas[0],mas[2]-mas[0]};
    for (int i=3;i<N;i++)
        length[i]=min(length[i-1],length[i-2])+mas[i]-mas[i-1];
    cout << length[N-1];
}
