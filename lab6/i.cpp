#include <bits/stdc++.h>
using namespace std;
void lowerc(string s){
    for (int i = 0; i < s.size(); i++){
        if (i%2 == 0){
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
   
}
int main (){
    string s;
    cin >> s;
    lowerc(s);
    return 0;
}