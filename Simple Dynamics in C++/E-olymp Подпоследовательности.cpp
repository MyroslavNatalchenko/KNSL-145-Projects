#include <bits/stdc++.h>

using namespace std;
int main()
{
    int N,mas[10000],answer[10000],ans=1;
    cin >> N;
    for (int i=0;i<N;i++)
        cin >> mas[i];
    for (int i=0; i<N; ++i)
    {
	    answer[i]=1;
	    for (int j=0; j<i; ++j)
        {
           cout << mas[j] << '<' << mas[i] << ". i=" << i << ", j=" << j << ". Before answer[i]=" << answer[i] << ". After answer[i]=";
		   if (mas[j] < mas[i])
           {
               answer[i]=max(answer[i],1+answer[j]);
           }
           cout << answer[i] << ".\n";
           //ћы каждый раз смотрим сколько элементов меньше mas[i] с помощью цикла с j количество таких элементов это размер возрастающей последовательности
        }
    }
    for (int i=0;i<N;++i)
	    if (answer[i]>ans)
            ans=answer[i];
    cout << ans;
}
