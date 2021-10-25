#include <iostream>
#include <algorithm>

#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    int countOfDigit = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto i : m)
    {
        if (i.second >= 2)
        {
            countOfDigit++;
        }
    }
    cout << countOfDigit;

    return 0;
}