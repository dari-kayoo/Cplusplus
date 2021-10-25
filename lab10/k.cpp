#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (a[j] % i != 0)
            {
                cnt++;
            }
        }
        
    }

    cout << cnt;

    return 0;
}