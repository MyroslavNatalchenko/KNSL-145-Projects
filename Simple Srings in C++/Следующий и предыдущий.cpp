#include <bits/stdc++.h>

using namespace std;

int main()
{
     char input;
     cin >> input;
     cout << "The next char for '" << input << "' (" << int(input) << ") is '" << char(input+1) << "' (" << input+1 <<")." << '\n';
     cout << "The previous char for '" << input << "' (" << int(input) << ") is '" << char(input-1) << "' (" << input-1 <<")." << '\n';
}
