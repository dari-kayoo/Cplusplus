#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    float end = sqrt((float)n);
    for (int i=2; i <= end; ++i) {
        if (n%i == 0) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";



    return 0;
}