#include <iostream>
using namespace std;
int main (){
    int n, x;
    int a[n];
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cin >> x;
    for (int i = 0; i < n; i++){
        if (a[i] != x){
            cout << "No";        
        } else {
            cout << "Yes";       
        }
    }
    return 0;
}