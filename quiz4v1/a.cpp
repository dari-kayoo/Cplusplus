#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> firstNumbers;
    vector<int> secondNumbers;
    for (int i = 0; i < n; i++)
    {
        int firstNumber, secondNumber;
        cin >> firstNumber >> secondNumber;

        firstNumbers.push_back(firstNumber);
        secondNumbers.push_back(secondNumber);
    }

    for (int i = 0; i < n; i++)
    {
        int timesOccured = 0;
            for (int j = 0; j < i; j++)
            {
                if ((firstNumbers[i] == firstNumbers[j] 
                and secondNumbers[i] == secondNumbers[j]) 
                or (firstNumbers[i] == secondNumbers[j] 
                and secondNumbers[i] == firstNumbers[j]))
                {
                    timesOccured++;
                }
            }
        cout << timesOccured << endl;
    }

    return 0;
}