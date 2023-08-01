#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[], long long&N)
{
    cin >> N;
    for (int i=0; i<N; i++)
        cin >> mas[i];
}

void merge_N(int mas1[],int mas2[],int mas[],int N1, int N2)
{
    int i=0, j=0;
    for (int k=0;k<N1+N2;++k)
    {
        if (i>=N1)
        {
            mas[k]=mas2[j];
            j++;
        }
        else if (j>=N2)
             {
                 mas[k]=mas1[i];
                 i++;

             }
             else if (mas[i] > mas2[j])
                  {
                    mas[k]=mas2[j];
                    j++;
                  }
                  else
                  {
                      mas[k]=mas1[i];
                      i++;
                  }
    }
}


void out_mas(int mas[],int N)
{
    for (int i=0; i<N; ++i)
        cout << mas[i] << ' ';
}


int mas1[1000000], mas2[1000000], mas[1000000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N1,N2,N;
    inp_mas(mas1,N1);
    inp_mas(mas2,N2);
    merge_N(mas1,mas2,mas,N1,N2);

    out_mas(mas,N1+N2);


    return 0;
}
