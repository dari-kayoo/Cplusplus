#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, x;
    cin >> n;
    int hour = 9;
    int min = 0;
    int pause1 = 5;  
    int pause2 = 15;
    if (n%2 == 0){
        x = n*45+
    } else if (n%2 != 0 && n > 1){
        x = n*45+pause2*(n/2)+(n-1)*pause1 - (n/2)*5;
    }
    cout << x/60+hour << " ";
    cout <<  x%60;


    return 0;
}