#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], int&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}


int minimal(int mas[], int  N)
{
    long long S=mas[0];
    if (S > 1)
       return 1;
    else
      for (int i=1; i<N; i++)
      {
        if (S+1 < mas[i])
            if ((S + 1 < 1) && (S < 5000))
              return S+1;
            else return 1;

        S=S+mas[i];
      }
    return S+1;
}
int mas[100000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    inp_mas(mas,N);
    sort(mas,mas+N);
    cout << minimal(mas,N);
    return 0;

}
