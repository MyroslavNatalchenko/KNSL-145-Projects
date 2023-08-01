#include <iostream>

using namespace std;

string perevirka(string &text, int &first, int &last, string str)
{
    string cnt;
    first=text.find_first_not_of(str, first);
    if (first == -1)
        return "";
    last=text.find_first_of(str, first);
    if (last == -1)
       last=text.size();
    cnt=text.substr(first,last-first);
    return cnt;
}
int main()
{
    string text,letter,etalon="0",str=":;.,!?";
    int first=0, last, etalon_size=0, cnt=0;
    while (cin >> text)
    {
        first=0;
        while(first<text.size()-1)
        {
            letter=perevirka(text, first, last, str);
            first=last;
            if (letter.find_first_of("AaEeOoUuIiYy")==0)
                if (letter.size()>etalon_size)
                {
                    etalon=letter;
                    etalon_size=letter.size();
                }

        }
    }
    if (etalon_size==0) cout<<-1<<'\n';
    else cout << etalon << '\n';
    return 0;
}
