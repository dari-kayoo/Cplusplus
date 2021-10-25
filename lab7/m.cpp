#include <bits/stdc++.h>
using namespace std;
void outpu(int n, int k)
{
    if (n != 0 )
    {
        if (k <= n)
        {
            cout << k<< " ";
            k++;
            outpu(n, k);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    outpu(n, 1);
    return 0;
}