#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    for (long long i = 0; i <= n; i++){
        cout << pow(i, i) << " ";
    }
    return 0;
}