#include <bits/stdc++.h>
using namespace std;
double power(double a, int b){
    double k;
    k = pow(a, b);
    return k;
}
int main (){
    double f;
    int h;
    cin >> f >> h;
    cout << power(f, h);
    return 0;
}