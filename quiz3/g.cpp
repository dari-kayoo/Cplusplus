#include <bits/stdc++.h>
using namespace std;
void Prime(int n){
   if (n != 1){
    if (n%2 == 0){
        cout << 2 << " ";
        return Prime(n/2);

    } else if ( n % 3 == 0){
        cout << 3 << " ";
        return Prime(n/3);


    } else if ( n % 5 == 0){
        cout << 5 << " ";
        return Prime(n/5);

        
    } else if ( n % 7 == 0){
        
        cout << 7 << " ";
        return Prime(n/7);

    } else if ( n % 9 == 0){
        cout << 9 << " ";
        return Prime(n/9);

        
    } else {
        cout << n << " ";
    }
   }
}
int main(){
    int n;
    cin >> n;
    
     Prime(n);
    

    return 0;
}