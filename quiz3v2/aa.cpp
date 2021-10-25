#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector <string> a;
    for (int i = 0; i < n; i++)
    {
        string q;
        cin >> q;
        a.push_back(q);
    }
    int q;
    cin >> q;
    vector <string> t;
    for (int i = 0; i < q; i++)
    {
        string q;
        cin >> q;
        t.push_back(q);
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