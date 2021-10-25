#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool arePair(char opening, char closing)
{
    if (opening == '(' and closing == ')')
        return true;
    return false;
}
bool balanced(string exp)
{
    stack<char> s;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] == '(')
            s.push(exp[i]);
        else if (exp[i] == ')')
        {
            if (s.empty() || !arePair(s.top(), exp[i]))
                return false;
            else
                s.pop();
        }
    }
    return s.empty() ? true : false;
}

int main()
{
    string expression;
    cin >> expression;
    if (balanced(expression))
        cout << "YES";
    else
        cout << "NO";
        
    return 0;
}