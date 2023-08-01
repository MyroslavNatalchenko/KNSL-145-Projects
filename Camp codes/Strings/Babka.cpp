#include <iostream>

using namespace std;
void cnt_letter(int cnt[],string &text)
{
    for (int i=0; i<text.size(); ++i)
    {
        ++cnt[text[i]-97];
    }
}
int main()
{
    int cnt[100]={0};
    string text;
    cin>>text;
    cnt_letter(cnt,text);
    for (int i=0; i<26; ++i)
    {
        if (cnt[i])
            cout << (char)(i+97) << ' ' << cnt[i] << '\n';
    }
    return 0;
}
