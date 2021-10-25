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

    for (auto ch : word)
    {
        if (ch >= 65 and ch <= 90)
        {
            upperCount++;
        }
        else if (ch >= 97 and ch <= 122)
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