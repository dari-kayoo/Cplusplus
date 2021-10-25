#include <iostream>
using namespace std;
int main()
{
    int n, l, r;
    int a[100001];
    cin >> n >> l >> r;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = l-1; i <= r-1; i++){
        sum +=a[i];
    }
    cout << sum;

    return 0;
}