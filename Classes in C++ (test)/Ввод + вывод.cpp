#include <bits/stdc++.h>

using namespace std;

class Tlong
{
    const static int Nmax=100;
    public:
        void input_long()
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
        void output_long()
        {
            if (len==1 && digit[Nmax-1]==0)
                sign='+';
            if (sign=='-') cout<<'-';
            for (int i=Nmax-len; i<Nmax; ++i)
                      cout << digit[i];
        }
    private:
        int len;
        char sign;
        int digit[Nmax];
};


using namespace std;

int main()
{
    Tlong a;
    a.input_long();
    a.output_long();
}
