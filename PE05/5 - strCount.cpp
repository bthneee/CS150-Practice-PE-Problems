#include <iostream>
#include <string>

using namespace std;

int strCount(const string& str, const string& sub)
{
    size_t strlen = str.size();
    size_t sublen = sub.size();

    if(strlen < sublen) return 0;
    if(str.substr(0, sublen) == sub)
      return 1 + strCount(str.substr(sublen), sub);
    else
      return strCount(str.substr(1), sub);
}

int main()
{
  cout << strCount("catcowcat", "cat") << "| 2" << endl;
  cout << strCount("catcowcat", "cow") << "| 1" << endl;
  cout << strCount("catcowcat", "dog") << "| 0" << endl;
}

