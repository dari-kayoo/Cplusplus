#include <iostream>
using namespace std;
bool vali(int n){
    if (n == 0){
        return true;
    }
    if (n%2 == 0){
        return vali(n/10);
    }
    
    return false;
    
}
int main (){
    int n;
    cin >> n;
    if (vali(n) == true){
        cout << "Valid";
    } else {
        cout << "Not valid";
    }
    return 0;
}