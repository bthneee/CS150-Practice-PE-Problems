#include <iostream>
#include <string>

using namespace std;

int countTriple(const string& str)
{
    int count = 0;
    size_t len = str.size();

    for(size_t i = 0; i < len - 2; i++)
    {
      char temp = str[i];
      if(temp == str[i + 1] && temp == str[i + 2])
        count++;
    }
    return count;
}

int main()
{
  cout << countTriple("abcXXXabc") << "| 1" << endl;
  cout << countTriple("xxxabyyyycd") << "| 3" << endl;
  cout << countTriple("a") << "| 0" << endl;
}
