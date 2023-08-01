
#include <bits/stdc++.h>

using namespace std;

int mas[1000002];

int posledovatelnost(int mas[],int N)
{
    int cnt=0, etalon=0;
    mas[N]=13;
    for (int i=0;i<=N;i++)
    {
        if (mas[i]<0)
        {
            cnt=cnt+1;
        }
        else
        {
            if (cnt > etalon)
            {
                 etalon=cnt;
                 cnt=0;
            }
            else {
                cnt=0;
            }

        }
    }

    return etalon;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> mas[i];

    cout << posledovatelnost(mas,N);


    return 0;
}
