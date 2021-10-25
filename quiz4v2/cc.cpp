#include <iostream>

using namespace std;
bool checkPrime(int n)
{
    if (n <= 2)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    while (true)
    {
        int number;
        cin >> number;
        int counter = 0;
        int numbers = 0;

        while (counter < number)
        {
            numbers++;
            if (checkPrime(numbers))
                counter++;
        }

        cout << numbers << endl;

        break;
    }
    return 0;
}
