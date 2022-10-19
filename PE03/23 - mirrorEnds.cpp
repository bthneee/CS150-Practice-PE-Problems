#include <iostream>
#include <string>

using namespace std;

string mirrorEnds(const string& str)
{
    string result = "";
    size_t len = str.size();

    for(int i = 0; i < len; i++)
    {
      if(str[i] == str[len - 1 - i])
        result += str[i];
      else
        return result;
    }
    return result;
}

int main()
{
  cout << mirrorEnds("abXYZba") << "| ab" << endl;
  cout << mirrorEnds("abca") << "| a" << endl;
  cout << mirrorEnds("aba") << "| aba" << endl;
}
