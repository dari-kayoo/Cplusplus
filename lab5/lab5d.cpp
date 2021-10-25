#include <iostream>
using namespace std;

int main(){
    string string1;
    cin >> string1;
    int i;
    int flag = 0; 
    
    for(i=0;i < string1.length() ;i++){
        if(string1[i] != string1[string1.length()-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag == 0) {
        cout << "YES" << endl; 
    }    
    else {
        cout << "NO" << endl; 
    }

    return 0;
}