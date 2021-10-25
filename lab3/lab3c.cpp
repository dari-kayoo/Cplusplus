#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int maxi = -1000000000;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxi)
        {
            maxi = a[i];
        }
    }
    cout << maxi;

    return 0;
}