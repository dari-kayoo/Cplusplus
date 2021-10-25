#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int a[n][n];
    cin >> n;
    int mx1 = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            mx1 = max(mx1, a[i][j]);
        }
    }
    
    int mx2 = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < mx1 && a[i][j] > mx2)
            {
                mx2 = a[i][j];
            }
        }
    }
    cout << mx1 << " ";
    cout << mx2;

    return 0;
}