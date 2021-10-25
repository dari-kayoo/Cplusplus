#include <iostream>
#include <vector>
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
    vector<int> v;

    merge(a, a + n, b, b + k, v.begin());

    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        if (*it != 0)
            cout << *it << " ";
    return 0;
}