#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[1000];
    bool isCheater = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] - arr[i + 1] <= k)
        {
            isCheater = true;
        }
        else
        {
            isCheater = false;
        }
        cout << arr[i] << " ";
    }
    if (isCheater == true)
    {
        cout << "cheater";
    }
    else
    {
        cout << "no";
    }
    return 0;
}