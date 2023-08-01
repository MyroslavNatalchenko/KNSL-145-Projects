#include <bits/stdc++.h>

using namespace std;


int amount_of_mines(int m[0][50], int row, int col)
{
    int cnt=0;
    int pole[8][2]={{-1,-1},{-1,0}, {-1,1}, {0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}}; //поле вокруг точки дл€ проверки
    for (int i=0; i<8; ++i)  //провер€ем колво мин
    {
        if (m[row+pole[i][0]][col+pole[i][1]]=='*')
            cnt++;
    }
    return cnt;
}

void output_mas(int m[][50], int row, int col)
{
    for (int i=1; i<=row; ++i)
    {
        for (int j=1; j<=col; ++j)
        {
            if (m[i][j]=='*')
                cout<<'*'<<" ";
            else cout << amount_of_mines(m,i,j) << ' ';
        }
        cout << '\n';
    }
}

int m[50][50];
int main()
{
    int N,row,col,x,y;
    cin >> row >> col;
    cin >> N;
    for (int i=0; i<N; ++i)
    {
        cin >> x >> y;
        m[x][y]='*';
    }
    output_mas(m,row,col);
    return 0;
}

