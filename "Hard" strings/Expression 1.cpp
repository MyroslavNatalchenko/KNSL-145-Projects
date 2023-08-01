#include <bits/stdc++.h>
using namespace std;
void output(double a,double b,char sign)
{
   if (sign=='+')
   {
       if (a+b == floor(a+b))
            cout << fixed << setprecision(0) << a+b << '\n';
       else
            cout << fixed << setprecision(4) << a+b << '\n';
   }
   if (sign=='-')
   {
      if (a-b == floor(a-b))
         cout << fixed << setprecision(0) << a-b << '\n';
      else
         cout << fixed << setprecision(4) << a-b << '\n';
    }
    if (sign=='/')
    {
       if (b==0)
          cout << "Error" << '\n';
       else
       {
           if (a/b == floor(a/b))
              cout << fixed << setprecision(0) << a/b << '\n';
           else
              cout << fixed << setprecision(4) << a/b << '\n';
       }
    }
    if (sign=='*')
    {
       if (a*b == floor(a*b))
           cout << fixed << setprecision(0) << a*b << '\n';
       else
           cout << fixed << setprecision(4) << a*b << '\n';
    }
}

int main()
{
    freopen("expression_1.in","r",stdin);
    freopen("expression_1.out","w",stdout);
    string S,separator="+-*/";
    while(getline(cin,S))
    {
        int place=S.find_first_of(separator,0);
        string first_dodanok=S.substr(0,place),second_dodanok=S.substr(place+1,S.size());
        double one=stod(first_dodanok),two=stod(second_dodanok);
        output(one,two,S[place]);
    }

}
