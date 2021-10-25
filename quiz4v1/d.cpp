#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word, root;
    cin >> word >> root;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == root[0])
        {
            bool isMatched = true;
            for (int j = 0; j < root.size(); j++)
            {
                if (word[i + j] != root[j])
                {
                    isMatched = false;
                    break;
                }
            }

            if (isMatched)
                cout << i << " ";
        }
    }

    return 0;
}