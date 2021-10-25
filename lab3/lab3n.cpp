#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sqr;
    for (int i = 0; i < n; i++){
        cout << a[i]*a[i] << " ";
    }
    return 0;
}