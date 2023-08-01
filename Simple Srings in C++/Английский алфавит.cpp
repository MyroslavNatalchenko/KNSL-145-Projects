#include <bits/stdc++.h>

using namespace std;

int main()
{
     char start,stop;
     cin >> start >> stop;
     if (start>stop)
        swap(start,stop);
     for (char i=start;i<=stop;i++)
          cout << char(i-32) << i << ' ';
}
