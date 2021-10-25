#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    vector <int> a;
    vector <int> b;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int t;
        cin >> t;
        b.push_back(t);
    }

    int x = n + m;
    vector <int> c;
    for (int i = 0; i < n; i++)
    {
        c.push_back(a[i]);
    }
    for (int i = n; i < x; i++)
    {
        c.push_back(b[i - n]);
    }
    sort(c.begin(), c.end());

    for (int i = 0; i < x; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}