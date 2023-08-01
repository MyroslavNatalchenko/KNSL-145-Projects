#include <bits/stdc++.h>

using namespace std;


bool slovo(string text, long long rozmir)
{
    for (long long i=0; i<rozmir; i++)
    {
        if (!(isalpha(text[i]) || text[rozmir-1]=='.'))
            return false;
    }
    return true;
}



int m[1000000];
int main()
{
    int etalon_N=0,N,cnt=0;
    string text,etalon_word="0";
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> text;
        if (slovo(text,text.size()))
        {
            if (text.size() > etalon_N)
            {
               etalon_N=text.size();
               etalon_word=text;
               ++cnt;
            }
        }

    }

    if (cnt == 0)
        cout << -1;
    else cout << etalon_word;
    return 0;
}
