#include <bits/stdc++.h>
using namespace std;
bool One(int n){
    if (n == 1){
        return true;
    }
    if (n+3 == 1 || n+5 == 1){
        return true;
    }
    return false;
}
int main (){
    int n;
    cin >> n;
    if (One(n) == true){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}