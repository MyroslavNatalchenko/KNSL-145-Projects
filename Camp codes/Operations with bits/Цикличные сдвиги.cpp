#include <iostream>

using namespace std;


int cnt(int N)
{
    int k=0;
    while (N>0)
    {
        k++;
        N=N>>1;
    }
    return k;
}

int max_N(int k, int N, int t)
{
   int etalon=N;
   for (int i =1; i<=k; i++)
   {
      if (N&1)
        N=(N>>1)|t;
      else
        N=N>>1;
      if (N > etalon)
        etalon=N;
   }
   return etalon;
}

int main()
{
  int N,k=0,maximum,t;
  cin >> N;

  k=cnt(N);

  t=1<<(k-1);

  maximum=max_N(k,N,t);

  cout << maximum;
  return 0;
}
