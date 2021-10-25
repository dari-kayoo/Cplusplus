#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >> word;

    cout << "The anagram variants for string " << word << " are:\n";

    sort(word.begin(), word.end());

    do
    {
        cout << word << endl;
    } while (next_permutation(word.begin(), word.end()));

    return 0;
}