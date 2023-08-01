#include <iostream>

using namespace std;




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N_tests,N_stops,N;
    cin >> N_tests;
    for (int i=0; i<N_tests; ++i)
    {
        cin >> N_stops;
        N=(1<<N_stops)-1;
        cout << N << '\n';
        N=0;
    }
    return 0;
}
