#include <iostream>
using namespace std;
int main (){
    int n, f, k;
    int a[n];
    cin >> n >> f >> k;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    
     for (int i = f - 1; i < k; i++){
        sum += a[i];
    }
     cout << sum;


    return 0;
}