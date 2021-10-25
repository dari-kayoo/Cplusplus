#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    long long t[100001];
    for (int i = 0; i < q; i++)
    {
        cin >> t[i];
    }
    int cnt = 0;
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] == t[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }

    return 0;
}