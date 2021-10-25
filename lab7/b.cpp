#include <bits/stdc++.h>
using namespace std;
int binar(int n){
    if (n == 0){
        return 0;
    }
    n%2;
    return n/2;
}
int main (){
    int n;
    cin >> n;
    cout << binar(n);
    return 0;
}