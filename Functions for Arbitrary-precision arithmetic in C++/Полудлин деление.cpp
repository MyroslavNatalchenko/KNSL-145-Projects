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
}

int Lenlong(TLong & a)
{
    int i=0;
    while (i<Nmax-1 && a.digit[i]==0) ++i;
    return Nmax-i;
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

TLong divmod_short(TLong a, int b, int & rest)
{
   TLong res;
   rest=0;
   if ((a.sign=='-' && b>=0) || (a.sign=='+' && b<=0))
      res.sign='-';
   b=abs(b);
   for (int i=Nmax-a.len; i<Nmax; i++)
   {
       rest=rest*10+a.digit[i];
       res.digit[i]=rest/b;
       rest=rest%b;
   }
   res.len=Lenlong(res);
   if (a.sign=='-' && rest!=0)
      rest=-rest;
   return res;
}

int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   TLong a,res;
   int b,rest;
   input_long(a);
   cin >> b;
   res=divmod_short(a,b,rest);
   output_long(res);
}
