#include <iostream>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int code,key;
    cin >> code >> key;
    if ((code>>key)&1)
        cout << "YES";
    else cout << "NO";
    return 0;
}
