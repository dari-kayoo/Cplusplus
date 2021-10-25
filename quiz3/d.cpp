#include <bits/stdc++.h>
using namespace std;
bool Lo(string s1, string s2, int k){
    if (s1 == s2){
        return true;
    } else 
    if (s1[k] == 'b' and s2[k] == 'p'||s1[k] == 'p' and s2[k] == 'b'){
        return true;
    } else if (s1[k] == 'i' and s2[k] == 'e'||s1[k] == 'e' and s2[k] == 'i'){
        return true;
    } else if (s1 >= 'a' and s1 <='z' || s2 >='A' and s2 <= 'Z' ||s2 >= 'a' and s2 <='z' and ){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    map <string, string> m;
    string s1, s2;
    for (int i = 0; i < n; i++){
        cin >> s1;
        cin >> s2;
        m[s1] = s2;
        m[s2] = s1;
    }
    if (Lo(s1, s2, 0) == true){
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}