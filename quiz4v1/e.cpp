#include <iostream>
#include <string>
using namespace std;

int main()
{
    int year;
    cin >> year;

    int answer = year + 1;
    while (true)
    {
        string ansStr = to_string(answer);

        bool isDistinct = true;
        for (int i = 0; i < ansStr.size(); i++)
        {
            for (int j = 0; j < ansStr.size(); j++)
            {
                if (i == j)
                    continue;

                if (ansStr[i] == ansStr[j])
                {
                    isDistinct = false;
                    break;
                }
            }

            if (!isDistinct)
                break;
        }

        if (isDistinct)
        {
            cout << answer;
            break;
        }

        answer++;
    }

    return 0;
}