#include <iostream>
using namespace std;
double percentageOfGirls(double n, double g)
{
    return (g / n) * 100;
}
int main()
{
    double n, girls;
    cin >> n >> girls;
    cout << percentageOfGirls(n, girls);
    return 0;
}