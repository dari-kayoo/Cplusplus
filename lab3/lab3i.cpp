#include <iostream>
using namespace std;
int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n && !j >= l-1 && !j <= r-1; j++)
    {
        cout << a[j] << " ";
    }
    for (int i = r - 1; i >= l - 1; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}