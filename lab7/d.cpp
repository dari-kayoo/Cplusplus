#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word;
    cin >> word;
    long long sum = 0;
    string sumStr;
    for (int i = 0; i < word.size(); i++)
    {
        long long k = word[i] - '0';
        sum += k;
        sumStr = to_string(sum);
    }
    cout << sum;
    return 0;
}