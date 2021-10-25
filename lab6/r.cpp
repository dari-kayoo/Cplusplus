#include <iostream>
using namespace std;
char upperCase(char ch){
    if (ch >='a' and ch <= 'z'){
        ch = toupper(ch);
    }
    else {
        ch = ch;
    }
    return ch;
}

int main() {
    char ch;
    cin >> ch;
    cout << upperCase(ch);
    return 0;
}