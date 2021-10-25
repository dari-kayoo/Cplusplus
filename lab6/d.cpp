#include <bits/stdc++.h>
using namespace std;
bool books(int *a, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;

    if (books(a, n, k) == true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}