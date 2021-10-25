#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    string longest_word;
    
    while (cin >> word) {
        if (word.size() > longest_word.size()) {
            longest_word = word;
        }
    }

    cout << longest_word;

    return 0;
}