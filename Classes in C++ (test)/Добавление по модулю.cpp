#include <bits/stdc++.h>

using namespace std;

class Tlong
{
    const static int Nmax=100;
    public:
        void input_long();
        void output_long();
        int comp(Tlong&b);
        Tlong add_abs(Tlong&b);
    private:
        int len;
        char sign;
        int digit[Nmax];
        int comp_abs(Tlong&a,Tlong&b);
        int Lenlong();
};
void Tlong::input_long()
{
    string S;
    cin >> S;
    if (S[0]=='+' || S[0]=='-')
    {
        sign=S[0];
        S.erase(0,1);
    }
    len=S.size();
    for (int i=0; i<Nmax; i++)
        digit[i]=0;
    for (int i=0; i<S.size(); i++)
        digit[Nmax-len+i]=S[i]-48;
}
void Tlong::output_long()
{
    if (len==1 && digit[Nmax-1]==0)
        sign='+';
    if (sign=='-')
        cout << '-';
    for (int i=Nmax-len; i<Nmax; ++i)
        cout << digit[i];
    cout << '\n';
}
int Tlong::comp_abs(Tlong&a,Tlong&b)
{
    if (a.len > b.len) return 1;
    if (a.len < b.len) return -1;
    for (int i=Nmax-a.len; i<Nmax; ++i)
    {
        if (a.digit[i] > b.digit[i]) return 1;
        if (a.digit[i] < b.digit[i]) return -1;
    }
    return 0;
}
int Tlong::comp(Tlong&b)
{
    if (sign!=b.sign)
    {
        if (sign=='-')
            return -1;
        return 1;
    }
    if (sign=='+')
        return comp_abs(*this,b);
    return -comp_abs(*this,b);
}
int Tlong::Lenlong()
{
    int i=0;
    while (i<Nmax-1 && digit[i]==0) ++i;
    return Nmax-i;
}
Tlong Tlong::add_abs(Tlong&b)
{
    Tlong res;
    int S=0,p=0;
    for (int i=Nmax-1;i>=0;--i)
    {
        S=digit[i]+b.digit[i] + p;
        res.digit[i]=S%10;
        p=S/10;
    }
    res.len=res.Lenlong();
    return res;
}

using namespace std;

int main()
{
    Tlong a,b,res;
    int huy;
    a.input_long();
    b.input_long();
    a.output_long();
    b.output_long();
    res=a.add_abs(b);
    res.output_long();
}
