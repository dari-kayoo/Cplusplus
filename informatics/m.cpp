#include <bits/stdc++.h>
using namespace std;
int min(int a, int b, int c, int d){
    int mn;
    mn = min(min(a,b), min(c, d));
    return mn;
}
int main (){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min(a, b, c, d);

    return 0;
}