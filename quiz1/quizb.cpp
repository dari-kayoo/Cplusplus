#include <iostream>
using namespace std;
int main ()
{ 
    int n;
    cin >> n;
    int f1, f2, l1, l2;
    f1 = n/100000;
    f2 = n/10000%10;
    l1 = n%100/10;
    l2 = n%10;
    if (f1+f2 == l1+l2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    





    return 0;
}