#include <iostream>

using namespace std;

int main()
{
    int n;
    int a[n];
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] > 0)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}