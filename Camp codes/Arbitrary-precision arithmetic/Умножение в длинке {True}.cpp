#include <iostream>

using namespace std;

const int Nmax=100000;
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


int Lenlong(TLong & a)
{
    int i=0;
    while (i<Nmax-1 && a.digit[i]==0) ++i;
    return Nmax-i;
}

TLong multy(TLong & a, TLong & b)
{
    TLong res;
    int S=0,p=0;
    if (b.sign == a.sign)
        res.sign='+';
    else res.sign='-';
    for (int i=Nmax-1; i>=Nmax-b.len-1; --i)
        for (int j=Nmax-1; j>=Nmax-a.len-1; --j)
        {
            S=a.digit[j]*b.digit[i] + p + res.digit[i+j - Nmax +1];
            p=S/10;
            res.digit[i+j-Nmax+1]=S%10;
        }

    res.len=Lenlong(res);
    return res;
}


int main()
{
    TLong a,res,b;
    input_long(a);
    input_long(b);
    res=multy(a,b);
    output_long(res);
    return 0;
}
