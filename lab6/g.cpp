#include <iostream>
#include <string>
using namespace std;
void removeVowel(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] != 'a' and s[i] != 'e' and s[i] != 'u' and s[i] != 'i' and s[i] != 'o' and s[i] != 'A' and s[i] != 'E' and s[i] != 'U' and s[i] != 'I' and s[i] != 'O'){
            cout << s[i];
        } 
    }
}
int main() {
    string sentence;
    getline(cin, sentence);
    removeVowel(sentence);
    return 0;
}