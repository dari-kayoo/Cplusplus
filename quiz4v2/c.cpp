#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int prime_ind;
    int primeNum = 2, cnt = 0;
    for (int i = 2; i*i <= 100; i++){
        if (primeNum%i == 0){
            cnt++;
        }
    }
    if (cnt > 1){
        primeNum;
    }
    return 0;
}