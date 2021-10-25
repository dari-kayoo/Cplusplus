#include <iostream>
#include <vector>
using namespace std;

int fib(int n)
{
    if (n  ==  0)
        return 0;
    if (n == 1)
        return 0;
    if (n == 2){
         return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    cin >> n;
    vector <int> fibNum;
    int i = 0;
    while (i < 40)
    {
        fibNum.push_back(fib(i));
        i++;
    }
    int result;
    for (int j = 0; j < fibNum.size(); j++){
        if (n == j){
            result = fibNum[j];
        }
    }
    cout << result;
    return 0;
}