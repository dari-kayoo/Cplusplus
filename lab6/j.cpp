#include <bits/stdc++.h>
using namespace std;
int maxi(int a, int b, int c, int d){
    int maxim;
    maxim = max(max(a,b), max(c,d));
    return maxim;
}
int main (){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << maxi(a, b, c, d);
    return 0;
}