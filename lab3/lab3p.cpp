#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    double k;
    k = sqrt(n);
    if (k == int(k)){
         cout << "Yes";
    }
    else {
         cout << "No";
    }
   
    return 0;
}