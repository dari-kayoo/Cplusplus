#include <iostream>

using namespace std;

int main(){
    int n, k, time = 0;
    cin >> n >> k;
    if (n%k == 1 && n > k){
        cout << 2*(n/k)+1;
    } else if (n%k == 0){
        time = 2*(n/k);
        cout << time;
    } else if (n < k){
        cout << (n/k)*2 + n/(n%k)*2;
    } else {
        cout << 2*(n/k) + k/(n%k)*2;
    }
   
    return 0;
}