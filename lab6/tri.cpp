#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main (){
    double a, b, c;
    cin >> a >> b;
   
    c = pow(a,2) + pow(b,2);
    cout << setprecision(4);
    cout << sqrt(c);

    return 0;
}