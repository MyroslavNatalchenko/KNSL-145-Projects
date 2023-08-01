#include <bits/stdc++.h>

using namespace std;

int Selection(int m[],int place[],int N)
{
    int etalon,cnt=0,N0,j;
    N0=0;
    for (int i=0;i<=N-1;++i)
    {
        etalon=i;
        for (int j=i+1;j<N;++j)
         if (m[j] >  m[etalon])
             etalon=j;
        swap(m[i],m[etalon]);
        swap(place[i],place[etalon]);
    }

   return cnt;
}


int m[1000000], place[20];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,etalon,Angel,x,y;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        place[i]=i;
        cin >> Angel;
        cin >> etalon >> y;
        for (int j=1; j<Angel; j++)
        {
            cin >> x >> y;
            if (x>etalon)
                etalon=x;
        }
        m[i]=etalon;
    }

    Selection(m,place,N);


    for (int i=0; i<N; i++)
    {
        cout << place[i] << ' ';
    }

}
