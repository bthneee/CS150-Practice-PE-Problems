#include <iostream>
#include <string>

using namespace std;

string notReplace(const string& str)
{
    string result = "";
    size_t len = str.size();

    if(len < 2) return result;

    for(int i = 0; i < len; ++i)
    {
      if(i - 1 >= 0 && isalpha(str[i - 1]) || i + 2 < len && isalpha(str[i + 2]))
        result += str[i];
      else if(i + 1 < len && str.substr(i, i + 2) == "is")
      {
        result += "is not";
        i++;
      }
      else
        result += str[i];
    }
    return result;
}

int main()
{
  cout << notReplace("is test") << "| is not test" << endl;
  cout << notReplace("is-is") << "| is not-is not" << endl;
  cout << notReplace("This is right") << "| This is not right" << endl;
}
