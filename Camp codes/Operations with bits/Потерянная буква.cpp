#include <iostream>

using namespace std;




int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N_words;
    char lost_word, word;
    cin >> N_words >> lost_word;
    for (int i=1; i<N_words; ++i)
    {
        cin >> word;
        lost_word=lost_word^word;
    }
    if (lost_word==0)
        cout << "Ok";
    else cout << lost_word;
}
