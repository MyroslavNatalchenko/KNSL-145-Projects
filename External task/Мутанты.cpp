#include<bits/stdc++.h>

using namespace::std;

void inp_mas(int mas[],int&N)
{
    cin >> N;
    for(int i=0; i<N; i++)
        cin >> mas[i];
}


int right_postion(int mas[], int N, int check)
{
    int left=0,right=N-1,mediana=(left+right)/2;
    while(left<right)
    {
        mediana= (left+right)/2;
        if (mas[right] == check)
             return right;

        if (mas[mediana]==check && mas[mediana+1] == check)
            left=mediana+1;
        else if (mas[mediana]==check)
                return mediana;
        if (mas[mediana]<check)
            left=mediana+1;
        if (mas[mediana]>check)
            right=mediana-1;
    }
    if (mas[right]==check)
        return right;
    if (mas[mediana]==check)
        return mediana;
    if (mas[left]==check)
        return left;
    return -1;
}

int left_postion(int mas[], int N, int check)
{
    int left=0,right=N-1,mediana=(left+right)/2;
    while(left<right)
    {
        mediana=(left+right)/2;
        if (mas[left]==check) return left;

        if (mas[mediana]==check&&mas[mediana-1]==check)
            right=mediana-1;
        else if (mas[mediana] == check)
               return mediana;
        if (mas[mediana]<check)
             left=mediana+1;
        if (mas[mediana]>check)
             right=mediana-1;
    }
    if (mas[left]==check)
        return left;
    if (mas[mediana]==check)
       return mediana;
    if (mas[right]==check)
        return right;
    return -1;
}

int cnt_amout(int mas[], int N, int check)
{
    int left=left_postion(mas,N,check), right=right_postion(mas,N,check);
    if (left==-1 || right==-1)
          return 0;
    return right-left+1;
}

int main()
{
    int mas[1000000],N,check_N,check_mas[200000];
    inp_mas(mas,N);
    inp_mas(check_mas, check_N);
    for (int i=0; i<check_N; i++)
        cout << cnt_amout(mas,N,check_mas[i]) << '\n';
}
