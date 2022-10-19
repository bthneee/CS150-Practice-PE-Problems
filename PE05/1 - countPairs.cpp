#include <iostream>
#include <string>

using namespace std;

int countPairs(const string& str)
{
    if(str == "" | str.size() < 3) return 0;
    if(str[0] == str[2]) return 1 + countPairs(str.substr(1));
    else return countPairs(str.substr(1));
}

int main()
{
  cout << countPairs("axa") << "| 1" << endl;
  cout << countPairs("axax") << "| 2" << endl;
  cout << countPairs("axbx") << "| 1" << endl;
}
