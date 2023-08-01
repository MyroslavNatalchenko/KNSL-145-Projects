#include <bits/stdc++.h>
using namespace std;

string find_word(string&S,string&separator,int&pos)
{
    int pos_start=S.find_first_not_of(separator,pos);
    if (pos_start==-1)
    {
        pos=S.size();
        return "";
    }
    pos=S.find_first_of(separator, pos_start);
    if (pos==-1)
        pos=S.size();
    return S.substr(pos_start, pos-pos_start);
}

bool is_palindrom(string S) {
	for (int i = 0; i < S.size(); ++i)
		if (!isalpha(S[i]))
			S.erase(i-- , 1);
    if (S.empty())
        return false;
	int j=S.size()/2;
	for (int i=0;i<j;i++)
        if (tolower(S[i])!=tolower(S[S.size()-i-1]))
            return false;
    return true;
}

int main()
{
    freopen("palindrom.in", "r", stdin);
    freopen("palindrom.out", "w", stdout);
    string S,separator=".!?",word;
    bool exist=false;
    int pos=0;
    while(getline(cin,S))
    {
        while(pos!=S.size())
        {
            word=find_word(S,separator,pos);
            if(is_palindrom(word))
            {
                cout << word << '\n';
                exist=true;
            }
        }
        pos=0;
    }
    if (!exist)
        cout<<-1;
    return 0;
}
