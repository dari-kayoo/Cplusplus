#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    if (k>n){
        cout << 2;
    } else if (k == 2){
        cout << n;
    } else {
        cout << 2*(n/k) + k/(n%k)*2;
    }
    return 0;
}