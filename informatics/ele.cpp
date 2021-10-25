#include <bits/stdc++.h>
using namespace std;
bool election(bool x, bool y, bool z){
    bool h;
    if ((x == y or x == z) and y != z){
        h = x;
    } else if ((y == x or y == z) and x != z){
        h = y;
    } else if ((z == x or z == y) and x != y){
        h = z;
    } else {
        h = x;
    }
    return h;

}
int main (){
    bool x, y, z;
    cin >> x >> y >> z;
    cout << election(x, y, z);

    return 0;
}