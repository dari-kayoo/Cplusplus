#include <iostream>

using namespace std;
 
int main(){
    int a = 0;
    int b = 0;
    char x;
    cin >> a; cin >> x; cin >> b;
   
 
    switch (x){
    case '-':
       cout << a << ' ' << '-' << b << ' ' << '=' << ' ' <<  a - b <<'\n';
        break;
    case '+':
        cout << a << ' ' <<  '+' << ' ' <<  b << ' ' <<  '=' <<  ' ' << a + b << '\n';
        break;
    case '*':
        cout << a <<  ' ' << '*' <<  ' ' << b <<  ' ' << '=' <<  ' ' << a * b << '\n';
        break;
    case '/':
        cout << a <<  ' ' << '/' <<  ' ' << b <<  ' ' << '=' <<  ' ' << a / b << '\n';
        break;
    default:
       cout << "Error\n";
    }
    return 0;
}