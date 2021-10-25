#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int a[1000000];
    int b[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    int c[n + k];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < k; i++)
    {
        c[n + i - 1] = b[i];
    }

    for (int i = 0; i < n + k - 1; i++)
    {
        if (c[i] < c[i + 1])
            cout << c[i] << " ";
    }
    return 0;
}