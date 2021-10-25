#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    string word;
    cin >> word;

    int upperCount = 0, lowerCount = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= 65 and word[i] <= 90)
        {
            upperCount++;
        }
        else if (word[i] >= 97 and word[i] <= 122)
        {
            lowerCount++;
        }
    }

    if ((upperCount * a) < (lowerCount * b))
    {
        cout << (upperCount * a);
    }
    else
    {
        cout << (lowerCount * b);
    }

    return 0;
}