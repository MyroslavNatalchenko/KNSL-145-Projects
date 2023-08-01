#include <bits/stdc++.h>

using namespace std;

int cnt_small(string S)
{
    int cnt=0;
    for (int i=0;i<S.size();i++)
        if (S[i]>='a' && S[i]<='z')
            cnt++;
    return cnt;
}
int cnt_biggest_len(string S)
{
    int cnt=0,cnt_biggest=0;
    for (int i=0;i<S.size();i++)
    {
        if (S[i]>='a' && S[i]<='z')
        {
             cnt++;
        }
        else
        {
            if (cnt>cnt_biggest)
                cnt_biggest=cnt;
            cnt=0;
        }
     }
     if (cnt>cnt_biggest)
        cnt_biggest=cnt;
     return cnt_biggest;
}

string need(string S)
{
    for (int i=0;i<S.size();i++)
        if (islower(S[i]))
        {
            S.erase(i,1);
            i--;
        }
    return S;
}


int main()
{
     string S;
     getline(cin,S);
     cout << cnt_small(S) << '\n' << need(S) << '\n' << cnt_biggest_len(S);


}
