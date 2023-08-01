#include <bits/stdc++.h>

using namespace std;

void inp_index(int mas[], int&N)
{
	int card;
    cin >> N;
    for (int i=0; i<N; i++)
	{
		cin >> card;
		++mas[card];
	}

}
int cards_for_focus[58]={0};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N_cards,N_tests,N,cnt=0;
    inp_index(cards_for_focus,N_cards);
    cin >> N_tests;
    for (int i=1;i<=N_tests;i++)
    {

	    int index[58]={0};
        inp_index(index,N);
        cnt=0;
        for (int j=1;j<=57;j++)
           if (index[j]>=cards_for_focus[j] && cards_for_focus[j]!=0)
               cnt+=cards_for_focus[j];
        if (cnt < N_cards)
                cout << "NO" << '\n';
        else cout << "YES"<< '\n';
    }
}
