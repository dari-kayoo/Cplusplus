#include <bits/stdc++.h>
using namespace std;

int Primenum(int n){
    int k;
    for (int i = 2; i <= sqrt(n); i++){
        if (n%i == 0){
             k = i;
            return k;
        }
    }
    return k;
}
int main(){
    int n;
    cin >> n;
   cout << Primenum(n);
    return 0;
}