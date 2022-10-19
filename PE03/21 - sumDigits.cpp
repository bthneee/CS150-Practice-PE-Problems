#include <iostream>
#include <string>

using namespace std;

int sumDigits(const string& str)
{
    int sum = 0;
    size_t len = str.size();

    for(size_t i = 0; i < len; i++)
    {
      if(isdigit(str[i]))
      {
        string temp = str.substr(i, i + 1);
        sum += stoi(temp);
      }
    }
    return sum;
}

int main()
{
  cout << sumDigits("aa1bc2d3") << "| 6" << endl;
  cout << sumDigits("aa11b33") << "| 8" << endl;
  cout << sumDigits("Chocolate") << "| 0" << endl;
}
