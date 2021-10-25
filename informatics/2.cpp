#include <iostream>
using namespace std;
int samE(int n, int *a, int t, int g){
    if (a[t] == a[t+1]){
        g = a[t];
    } else{
        g = 0;
    }
    return g;
}
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << samE(n, a, 0, 0);
    return 0;
}