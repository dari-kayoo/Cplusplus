#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }
    sort(even.rbegin(), even.rend());
    sort(odd.begin(), odd.end());
    for (int i = 0; i < even.size(); i++)
    {
        cout << even[i] << " ";
    }
    for (int i = 0; i < odd.size(); i++)
    {
        cout << odd[i] << " ";
    }
    return 0;
}