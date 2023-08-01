
#include <bits/stdc++.h>

using namespace std;


void inp_mas(int mas[], int N)
{
    for (int i=0; i<N; i++)
        cin >> mas[i];
}

int sum_mas(int mas[], int N)
{
    int sum=0;
    for (int i=0; i<N; i++)
    {
        sum=sum+mas[i];
    }
    return sum;
}

int min_el(int el1,int el2,int el3)
{
    if (el1<=el2 && el1<=el3)
        return 1;
    else if (el2<=el1 && el2<=el3)
             return 2;
         else return 3;
}


int main()
{
    freopen("School_hedgehog.dat", "r", stdin);
    freopen("School_hedgehog.res", "w", stdout);
    int N=3,sum1,sum2,sum3;
    int mas1[N], mas2[N], mas3[N];
    inp_mas(mas1,N);
    inp_mas(mas2,N);
    inp_mas(mas3,N);
    for (int i=0; i<N; ++i)
        cout<< min_el(mas1[i],mas2[i],mas3[i]) << ' ';
    sum1=sum_mas(mas1,N);
    sum2=sum_mas(mas2,N);
    sum3=sum_mas(mas3,N);

    cout << min_el(sum1,sum2,sum3) << ' ';
    return 0;
}
