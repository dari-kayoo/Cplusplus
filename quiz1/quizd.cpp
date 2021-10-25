#include <iostream>
using namespace std;
 
int main()
{
    int x;
    int y;
    cin >> x; cin >> y;

    cout <<"Usual division: "<< static_cast<double>(x) / y << '\n';
    cout <<"Division without remainder: "<< x / y << '\n';
    cout <<"Remainder: "<< x%y;
  
    
 
    return 0;
}