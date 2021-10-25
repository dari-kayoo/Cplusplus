#include <bits/stdc++.h>
using namespace std;
int main (){
    int v, t;
    cin >> v >> t;
    if (v*t > 0){
        cout << v*t - 109;
    } else {
        cout << 109 - v*t;
    }
    return 0;
}