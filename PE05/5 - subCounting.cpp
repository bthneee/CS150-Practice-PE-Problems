#include <iostream>
#include <string>

using namespace std;

int subCounting(const string& str, const string& sub)
{
    size_t strlen = str.size();
    size_t sublen = sub.size();

    if(strlen < sublen) return 0;
    if(str.substr(0, sublen) == sub)
      return 1 + subCounting(str.substr(sublen), sub);
    else
      return subCounting(str.substr(1), sub);
}

int main()
{
  cout << subCounting("catcowcat", "cat") << "| 2" << endl;
  cout << subCounting("catcowcat", "cow") << "| 1" << endl;
  cout << subCounting("catcowcat", "dog") << "| 0" << endl;
}

