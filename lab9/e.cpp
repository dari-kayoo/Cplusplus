#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> numbers;
    int countOfNumbers = 0;
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        numbers.push_back(num);
    }
    for (int i = 0; i < n; i++)
    {
        m[numbers[i]]++;
    }
    for (auto i : m)
    {
        if (i.second == 3)
        {
            countOfNumbers++;
        }
    }
    cout << countOfNumbers;
    return 0;
}