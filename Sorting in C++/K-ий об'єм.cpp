#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[][2],int N)
{
    int a,b,c;
    for (int i=0; i<N; i++)
    {
        cin >> a >> b >> c;
        mas[i][0]=a*b*c;
        mas[i][1]=i+1;
    }
}

void quicksort(int m[][2],int left,int right,int ryad)
{
    int etalon=m[(left+right)/2][ryad],j=right,i=left;
    while (i<j)
    {
      while (m[i][ryad]<etalon) ++i;
      while (m[j][ryad]>etalon) --j;
      if (i<=j)
      {
         swap(m[i],m[j]);
         ++i;
         --j;
      }
    }
    if(left<j) quicksort(m,left,j,ryad);
    if(i<right) quicksort(m,i,right,ryad);
}

int find_V(int mas[][2], int N, int K)
{
    long long cnt=1;
    if (cnt==K)
        return mas[0][0];
    for (int i=1;i<N;i++)
    {
        if (mas[i][0]!=mas[i-1][0] && mas[i-1][0]!=0)
            cnt++;
        if (cnt==K && K!=1)
            return mas[i][0];
    }
    return -100;
        cout << "No more bricks.";
}


int mas[100000][2];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,K,need_V;
    cin >> N >> K;
    inp_mas(mas,N);
    quicksort(mas,0,N-1,0);
    need_V=find_V(mas,N,K);
    if (need_V==-100)
        cout << "No more bricks.";
    else
    {
        quicksort(mas,0,N-1,1);
        for (int i=0;i<N;i++)
            if (mas[i][0]==need_V)
              cout << i+1 << ' ';
    }
    return 0;

}
