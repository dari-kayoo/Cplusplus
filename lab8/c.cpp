#include <bits/stdc++.h>
using namespace std;
bool Findn(int n, int *a, int k, int i){
    if (a[i] == k){
        return true;
    } 
    return false;

}
int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    if (Findn(n, a, k, 0) == true){
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}