#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        a.push_back(t);
    }
    int k;
    cin >> k;
    int sum = 0;
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < k; i++){
        sum+=a[i];
    }
    cout << sum;

    return 0;
}