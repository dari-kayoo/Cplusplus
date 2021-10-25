#include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a; cin >> b; cin >> c;
    if (a <= b + c, b <= a + c, c <= a + b)
    {
        cout << "Yes" << endl;
    }
    else if (a > b + c, b > a + c, c > a + b)
    {
       cout << "No" << endl;
    }
    
     return 0;
}