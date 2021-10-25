#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;
    set<char> h;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i]<= 'Z'){
            s[i] += 32;
        }
        h.insert(s[i]);
    }
    cout << h.size() << endl;
    for (auto &item : h){
        cout << item << " ";
    }
    return 0;
}