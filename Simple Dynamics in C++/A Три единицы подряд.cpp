#include <iostream>

using namespace std;
long long mas[40]={0,2,4,7};
int main()
{
    int N;
    cin >> N;
    for (int i=4;i<=N;i++)
        mas[i]=mas[i-1]+mas[i-2]+mas[i-3];
    cout << mas[N];
}
