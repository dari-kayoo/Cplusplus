#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string word;
    cin >> word;
    int n;
    cin >> n;
    int countDigit = 0;
    vector<int> arrIndDigit;
    bool isValid = true;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] >= '0' and word[i] <= '9')
        {
            countDigit = 1;
            arrIndDigit.push_back(i);
        }
    }
    for (int i = 0; i < arrIndDigit.size(); i++)
    {
        if (arrIndDigit[i] == arrIndDigit[i + 1] - 1)
        {
            countDigit++;
        }
    }
    if (countDigit >= n)
    {
        isValid = true;
    }
    else
    {
        isValid = false;
    }

    if (isValid == true)
    {
        cout << "Valid";
    }
    else
    {
        cout << "Not valid";
    }
    return 0;
}