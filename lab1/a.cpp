#include <bits/stdc++.h>
using namespace std;
void dup(int& x, int& y, int& z){
    x*=2;
    y*=2;
    z*=2;
}
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    dup(x, y, z);
    cout << x <<" " << y <<" " << z;
    return 0;
}