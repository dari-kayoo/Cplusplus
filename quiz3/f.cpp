#include <bits/stdc++.h>
using namespace std;
void Primenum(int n){
    while(true){
    if (n != 1){
    if (n%2 == 0){
        cout << 2 << " ";
        n=n/2;

    } else if ( n % 3 == 0){
        cout << 3 << " ";
        n= n/3;


    } else if ( n % 5 == 0){
        cout << 5 << " ";
        n=n/5;

        
    } else if ( n % 7 == 0){
        
        cout << 7 << " ";
        n=n/7;

    } else if ( n % 9 == 0){
        cout << 9 << " ";
       n=n/9;

        
    } else {
        cout << n << " ";
        n=n/n;
        break;
    }

   }

    }
}

int main(){
    int n;
    cin >> n;
    Primenum(n);
    return 0;
}