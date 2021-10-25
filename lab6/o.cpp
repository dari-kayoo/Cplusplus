#include <iostream>
#include <string>
using namespace std;
int sum = 0;

int main()
{
    string digit;
    cin >> digit;
    for (int i = 0; i < digit.size(); i++)
    {
        sum += digit[i] - '0';
    }

    if (sum % (digit[digit.size() - 1] - '0') == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}