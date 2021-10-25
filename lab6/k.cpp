#include <iostream>
#include <string>
using namespace std;
int sum = 0;
int sumOfDigits(int n){
    string digit = to_string(n);
    for (int i = 0; i < digit.size(); i++){
        sum+=digit[i] - '0';
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << sumOfDigits(n);
    return 0;
}