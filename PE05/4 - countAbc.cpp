#include <iostream>
#include <string>

using namespace std;

int countAbc(const string& str)
{
    if(str.size() < 3) return 0;
    if(str.substr(0, 3) == "abc" || str.substr(0, 3) == "aba")
      return 1 + countAbc(str.substr(1));
    else
      return countAbc(str.substr(1));
}

int main()
{
  cout << countAbc("abc") << "| 1" << endl;
  cout << countAbc("abcxxabc") << "| 2" << endl;
  cout << countAbc("abaxxaba") << "| 2" << endl;
}
