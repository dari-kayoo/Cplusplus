#include <bits/stdc++.h>
using namespace std;
bool Isprime(int n){
    bool h;
    for (int i = 2; i < n-1; i++){
        if (n%i == 0){
            h = false;
        }
    }

    return h;
}
int main (){
    int n;
    cin >> n;
    if (Isprime(n) == true){
        cout << "composite";
    } else {
        cout << "prime";
    }

    return 0;
}