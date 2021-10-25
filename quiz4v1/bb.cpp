#include <iostream>
#include <string>

using namespace std;


int main() 
{
  string word;
  cin >> word;

  string decrypted;
  for (int i = 0; i < word.size(); i++)
  {
    char newCh = 122 - (word[i] - 97);
    decrypted.push_back(newCh);
  }

  cout << decrypted;

  return 0;
}