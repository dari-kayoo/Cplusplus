#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x, y;
    x = x2 - x1;
    y = y2 - y1;
    printf ("%.10f", sqrt(pow(x, 2) + pow(y, 2)));
    return 0;
}