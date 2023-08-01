#include <bits/stdc++.h>

using namespace std;

string find_word(string&S,string&separator,int&pos)
{
    int pos_start_of_word=0;
    pos_start_of_word=S.find_first_not_of(separator,pos);
    if (pos_start_of_word==-1)
    {
        pos=-1;
        return "0";
    }
    pos=S.find_first_of(separator,pos_start_of_word);
    return S.substr(pos_start_of_word,pos-pos_start_of_word);
}

bool check_if_num(string S)
{
    for (int i=0;i<S.size();i++)
        if (isalpha(S[i]))
           return false;
    return true;
}

bool check_if_ravny(string S)
{
    unsigned long long Num=0,Armstrong=0;
    for (int i=0;i<S.size();i++)
    {
        Armstrong+=pow(S[i]-'0',S.size());
        Num*=10;
        Num+=S[i]-'0';
    }
    if (Armstrong==0) return false;
    return Num==Armstrong;
}

int main()
{
    freopen("armstrong.in", "r", stdin);
    freopen("armstrong.out", "w", stdout);
    string S,separator=".,;:!?\"[] \n\t\v\f\r",word;
    bool exist=false;
    int pos=0;
    while(getline(cin,S))
    {
        while(pos>=0)
        {
            word=find_word(S,separator,pos);
            if (check_if_num(word))
            {
                if (check_if_ravny(word))
                {
                    cout << word << '\n';
                    exist=true;
                }
            }
        }
        pos=0;
    }
    if(!exist)
        cout << -1;
    return 0;
}
