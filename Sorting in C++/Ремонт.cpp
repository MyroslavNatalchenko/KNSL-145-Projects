#include <bits/stdc++.h>

using namespace std;


void input_mas(int m[][2],int&N)
{
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> m[i][0] >> m[i][1];
}

void quicksort(int m[][2],int left,int right)
{
	int i=left;
	int j=right;
	int etalon=m[(left + right)/2][1];
	while (i<j)
	{
		while (m[i][1]<etalon) ++i;
		while (m[j][1]>etalon) --j;
		if (i <= j)
		{
			swap(m[i],m[j]);
			++i; --j;
		}

	}

	if (left < j) quicksort(m, left, j);
	if (i < right) quicksort(m, i, right);
}



void output_mas(int m[][2], int N)
{
    for (int i=0;i<N;i++)
        cout << m[i][0] << ' ';
    cout << '\n';
}

int main()
{
    int m[100000][2],N;
    input_mas(m,N);
    quicksort(m,0,N-1);
    output_mas(m,N);
    return 0;
}
