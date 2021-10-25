#include <bits/stdc++.h>
using namespace std;
bool fi(int l, int r, int *a, int k)
{
    if (l <= r)
    {

        int m = (l + r) / 2;
        if (a[m] == k)
        {
            return true;
        }
        if (a[m] < k)
        {
            return fi(m + 1, r, a, k);
        }
        else if (a[m] > k)
        {
            return fi(l, m - 1, a, k);
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
    if (fi(0, n - 1, a, k))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}