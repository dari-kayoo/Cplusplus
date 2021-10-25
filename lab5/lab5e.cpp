#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >> s;

    int sumeven = 0, sumodd = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= '0' && s[i] <= '9'){
            if (i%2 == 0){
            sumeven += s[i];
            }
            else {
            sumodd += s[i];
            }
        }       
    }
   
    if (sumeven == sumodd){
        cout << "YES";
    } else {
        cout << "NO";
    }

    
    
    return 0;
}