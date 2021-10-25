#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
  string word;
  cin >> word;

  sort(word.begin(), word.end());
  cout << "The anagram variants for string cat are:" << endl;

  do
  {
    cout << word << endl;
  } while (next_permutation(word.begin(), word.end()));

  return 0;
}