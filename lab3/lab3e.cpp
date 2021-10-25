#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    long long sum = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}