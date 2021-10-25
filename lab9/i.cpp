#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string>names;
    map<string, int> m;
    for (int i = 0; i < n; i++){
        string name;
        cin >> name;
        names.push_back(name);
    }
    
    for (int i = 0; i < names.size(); i++){
        int cnt = 0;
        for (int j = 0; j < n; j++){
            if(names[i] == names[j]){
                cnt++;
            }
        }
        cout << cnt;
        if (cnt > 1){
            cout << "user already exists" << endl;
        } else {
            cout << "new user added" << endl;
        }
    }
    
    return 0;
}