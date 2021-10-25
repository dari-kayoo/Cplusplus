#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    string a[100];
    string b[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << "Missed students: " << endl;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cnt++;
            }
        }
        if (cnt == 0)
        {
            cout << "- " << a[i] << endl;
        }
    }

    cout << "Not in the group: " << endl;
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == b[i])
            {
                cnt++;
            }
        }
        if (cnt == 0)
        {
            cout << "- " << b[i] << endl;
        }
    }
    return 0;
}