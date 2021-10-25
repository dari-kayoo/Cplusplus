#include <bits/stdc++.h>
using namespace std;
void div(int n)
{
    int a[100];
    int k, cnt, l = 0;
    for (int i = 0; i < n; i++)
    {
        k = i;
        cnt = 0;
        for (int j = 0; j <= k; j++)
        {
            if (k % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 2)
        {
            a[l] = k;
            l++;
        }
    }
    for (int i = 0; i < l; i++)
    {
        if (n % a[i] == 0)
        {
            cout << a[i] << " ";
            n = n / a[i];
        }
    }
}
int main()
{

    int n;
    cin >> n;
    div(n);

    return 0;
}