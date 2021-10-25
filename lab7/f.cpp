#include <iostream>
#include <string>
using namespace std;
int main()
{
    string number;
    cin >> number;
    int countEven = 0;
    for (int i = 0; i < number.size(); i++)
    {
        int k = number[i] - '0';
        if (k % 2 == 0)
        {
            countEven ++;
        }
    }
    cout << countEven;
    return 0;
}