#include <iostream>

using namespace std;

const long long Nmax=10000;
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
        a.sign='+';
    if (a.sign=='-') cout<<'-';
    for (int i=Nmax-a.len; i<Nmax; ++i)
        cout << a.digit[i];
    cout << '\n';
}

int Lenlong(TLong & a)
{
    int i=0;
    while (i<Nmax-1 && a.digit[i]==0) ++i;
    return Nmax-i;
}

TLong sub_abs(TLong & a, TLong & b)
{
    TLong res;
    int S=0,p=0;
    for (int i=Nmax-1;i>=0;--i)
    {
        S=a.digit[i] - b.digit[i] - p;
        if (S<0)
        {
            res.digit[i]=S+10;
            p=1;
        }
        else
        {
            res.digit[i]=S;
            p=0;

        }
    }
    res.len=Lenlong(res);
    res.sign='+';
    return res;
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


TLong divmod_short(TLong&a,TLong&b,TLong&divident)
{
   TLong res;
   int digit;
   for(int i=Nmax-a.len; i<Nmax; ++i)
   {
        for (int j=Nmax-divident.len;j<Nmax;j++)
            divident.digit[j-1]=divident.digit[j];
        divident.digit[Nmax-1]=a.digit[i];
        divident.len=Lenlong(divident);
        digit=0;
        while(digit<9 && comp_abs(divident,b)>=0)
        {
            ++digit;
            divident=sub_abs(divident,b);
        }
        res.digit[i]=digit;
    }
    if(a.sign==b.sign)
    {
        res.sign='+';
        divident.sign='+';
    }
    else
    {
        res.sign='-';
        divident.sign='-';
    }
    if (divident.digit[Nmax-1]!=0 && divident.len!=1)
    {
        divident=sub_abs(b,divident);
    }
    output_long(divident);
    res.len=Lenlong(res);
    return res;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   TLong a,b,res,divident;
   input_long(a);
   input_long(b);
   res=divmod_short(a,b,divident);
   output_long(res);
}
