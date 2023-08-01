#include <bits/stdc++.h>


using namespace std;


int main()
{
    string text;
    int cnt=0;
    getline(cin,text);
    int lenth=text.size();
    for (int i=0; i<lenth; i++)
    {
        if ( (text[i]=='.' &&  text[i+1]==' ')|| (text[i]=='!' &&  text[i+1]==' ') || (text[i]=='?' &&  text[i+1]==' '))
            cnt++;
    }
    cout << cnt;
}
