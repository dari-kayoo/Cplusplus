#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    string word;
    cin >> word;
    bool isPolindrome = false;;
    for (int i = 0; i < word.size(); i++){
        if (word[i] == word[word.size()-1 - i]){
            isPolindrome = true;
        } else {
            isPolindrome = false;
        }
    }
    if (isPolindrome == true){
        cout <<"Yes";
    } else {
        cout << "No";
    }
    return 0;
}