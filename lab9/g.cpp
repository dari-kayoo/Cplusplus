#include <iostream>
#include <string>
#include <queue>

using namespace std;
int main()
{
    string bin;
    cin >> bin;
    queue<char> z;
    string str = bin.substr(11);
    for (int i = 0; i < bin.size(); i++){
        bool isTrue = true;
        if (bin[i] == str[0]){
            for (int j = 0; j < str.size(); i++){
                if (bin[i+j] == str[j]){
                    isTrue = false;
                } 
            }
        }
        if (isTrue == true){
            z.push(bin[i]);
        }
    }

    while (!z.empty())
    {
        z.pop();
        cout << z.front();
        z.pop();
    }
    return 0;
}