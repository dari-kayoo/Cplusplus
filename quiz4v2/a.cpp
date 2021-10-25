#include <iostream>
#include <string>
using namespace std;
int main(){
    string word;
    while(cin >> word){
        int cnt = 0;
        for (int i =0; i < word.size(); i++){
            for (int j = 0; j < word.size(); j++){
                if (i == j){
                    continue;
                }  
                if (word[i] == word[j]){
                    cnt++;
                }
            }
           
        }
        
        cout << word << " : " << cnt <<endl;
        
    }
    return 0;
}