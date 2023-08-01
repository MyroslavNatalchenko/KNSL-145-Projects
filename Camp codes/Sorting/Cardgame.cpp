#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}


void Index(int mas[],int cnt[],int N)
{
  int Num,i;
  for (int i=0; i<N; ++i)
  {
     Num=mas[i];
     cnt[Num]++;
  }

}
int perevirka_kolod(int cnt1[],int cnt2[])
{
    int i=1,cnt=0;
    while (i<=56)
    {
      if (cnt2[i] < cnt1[i] || (cnt2[i]==0 && cnt1[i]!=0))
      {
          return false;
      }

      ++i;
    }

    return true;
}

int mas1[1000000],mas2[1000000];
int cnt1[57]={0};
int cnt2[57]={0};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N1,N2;

    inp_mas(mas1,N1);
    inp_mas(mas2,N2);
    Index(mas1,cnt1,N1);
    Index(mas2,cnt2,N2);

    if (perevirka_kolod(cnt1,cnt2))
    {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
