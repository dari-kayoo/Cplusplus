#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    string arr[10000];
    int countOfDigit = 1;
    set<string> occured;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == arr[i+1]){
            countOfDigit++;
            occured.insert(arr[i]);
        }
    }
    if (countOfDigit >= 2){
        cout << occured.size();
    } else {
        cout << 0;
    }
    
    return 0;
}