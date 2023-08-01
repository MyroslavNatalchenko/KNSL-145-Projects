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

int cnt_different(string S)
{
    int cnt=0;
    for (char i='A';i<='Z';++i)
    {
        if (count(S.begin(),S.end(),i) || count(S.begin(),S.end(),tolower(i)))
            ++cnt;
    }
    return cnt;
}

int main()
{
    freopen("maxsymbol.in", "r", stdin);
    freopen("maxsymbol.out", "w", stdout);
    string S,res,separator=".,;:!?\"[] ",word;
    bool exist=false,check_empty=true;
    int pos=0,etalon=0,cnt;
    while(getline(cin,S))
    {
        check_empty=false;
        while(pos>=0)
        {
            word=find_word(S,separator,pos);
            cnt=cnt_different(word);
            if(cnt==etalon)
            {
                res.push_back(' '); //добавляет в конец строки символ
                res.append(word); //вставляет в конец строки строку word
            }
            if(cnt>etalon)
            {
                etalon=cnt;
                res=word;
                exist=true;
            }
        }
        pos=0;
    }
    if(check_empty)
        cout << "NULL";
    else
    {
        if(!exist)
           cout << -1;
        else
           cout << res;
    }
    return 0;
}
