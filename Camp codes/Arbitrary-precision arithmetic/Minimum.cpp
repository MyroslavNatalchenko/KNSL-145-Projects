#include <iostream>

using namespace std;

const int Nmax=1000;
struct TLong
{
    char sign='+';
    int len=1;
    int digit[Nmax]={0};
};


void input_long(TLong & a)
{
    string S;
    cin >> S;
    if (S[0]=='+' || S[0]=='-')
    {
        a.sign=S[0];
        S.erase(0,1);
    }
    a.len=S.size();
    for (int i=0; i<Nmax; i++)
        a.digit[i]=0;
    for (int i=0; i<S.size(); i++)
        a.digit[Nmax-a.len+i]=S[i]-48;
}

void output_long(TLong & a)
{
    if (a.len==1 && a.digit[Nmax-1]==0)
        cout<<0;
    if (a.sign=='-') cout<<'-';
    for (int i=Nmax-a.len; i<Nmax; ++i)
        cout << a.digit[i];
}

int comp_abs(TLong & a, TLong & b)
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

int comp(TLong & a, TLong & b)
{
    if (a.sign!=b.sign)
    {
        if (a.sign=='-') return -1;
        return 1;
    }
    if (a.sign=='+') return comp_abs(a,b);
    return -comp_abs(a,b);
}


int main()
{
    TLong a,b;
    input_long(a);
    input_long(b);
    if (comp(a,b)==-1)
        output_long(a);
    else output_long(b);
}
