#include <iostream>
#include <string>

using namespace std;

int maxBlock(const string& str)
{
    int count = 0;
    int tempcount = 1;
    size_t len = str.size();

    if(len == 0) count = 0;

    for(int i = 0; i <  len; i++)
    {
      if(i < len - 1 && str[i] == str[i + 1])
        tempcount++;
      else
        tempcount = 1;
      if(tempcount > count)
        count = tempcount;
    }
    
    return count;
}

int main()
{
  cout << maxBlock("hoopla") << "| 2" << endl;
  cout << maxBlock("abbCCCddBBBxx") << "| 3" << endl;
  cout << maxBlock("") << "| 0" << endl;
}
