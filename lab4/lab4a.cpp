#include <iostream>
#define long long
using namespace std;
int main ()
{
    int n, t;
    cin >> n;
    int maxi = INT16_MIN;
    for (int  i = 0; i < n*n; i++)
    {
        cin >> t;
        if (t > maxi)
        {
            maxi = t;
        }
        
    }
    cout << maxi;
    

    return 0;
}