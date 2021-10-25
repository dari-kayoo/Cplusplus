#include <iostream>
using namespace std;
int po(int n, int res){
    if (n == 0){
        return res;
    }
    return po(n-1, res*2);
}
int main (){
    int n;
    cin >> n;
    int res = 1;
    cout << po(n, res);
    return 0;
}