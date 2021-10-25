#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int maxi = -1000000000;
    int mx_i = 0, mx_j = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > maxi)
            {
                maxi = a[i][j];
                mx_i = i + 1;
                mx_j = j + 1;
            }
        }
    }
    cout << mx_i << " " << mx_j;
    return 0;
}
