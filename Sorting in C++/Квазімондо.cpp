#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[][2],int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> mas[i][0];
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

int find_gram(int mas[][2],int N)
{
    int cnt=1;
    for (int i=N-1;i>0;i--)
    {
        if (mas[i-1][0]==mas[i][0])
            cnt++;
        else cnt=1;
        if (cnt>=2)
            return mas[i][0];
    }
    return -100;
}


void output_two_first(int mas[][2],int N)
{
    int cnt=0,i=0;
    int need_gram=find_gram(mas,N);
    quicksort(mas,0,N-1,1);
    if (need_gram==-100)
        cout << "I will have to harm my health.";
    else
        while (cnt < 2 && i < N)
        {
            if (mas[i][0]==need_gram)
            {
                cout << mas[i][1] << ' ';
                cnt++;
            }
            i++;
        }
}

int mas[100000][2];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N,need_gram,i=0,cnt=0;
    inp_mas(mas,N);
    quicksort(mas,0,N-1,0);
    output_two_first(mas,N);
    return 0;
}
