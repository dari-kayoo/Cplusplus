#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    string n;
    cin >> n;
    int maximumDigit = n[0] - '0';
    
    for (int i = 0; i < n.size(); i++){
        if (n[i] >= '0' and n[i] <= '9'){
           if ( n[i] - '0' > maximumDigit){
              maximumDigit = n[i] - '0';
            }
        }
    }
    cout << maximumDigit;
    return 0;
}