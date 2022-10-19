#include <iostream>
#include <string>

using namespace std;

string sameEnds(const string& str)
{
    string result = "";
    string temp = "";
    size_t len = str.size();

    for(size_t i = 0; i < len; i++)
    {
      temp += str[i];
      size_t tempLen = temp.size();
      if(i < len / 2 && temp == str.substr(len - tempLen, len))
      {
        result = temp;
      }
    }
    return result;
}

int main()
{
  cout << sameEnds("abXYab") << "| ab" << endl;
  cout << sameEnds("xx") << "| x" << endl;
  cout << sameEnds("xxx") << "| x" << endl;
}
