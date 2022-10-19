#include <iostream>
#include <string>

using namespace std;

int sumDigits(int n)
{
    if(n < 10) return n;
    return (n % 10) + sumDigits(n / 10);
}

int main()
{
  cout << sumDigits(126) << "| 9" << endl;
  cout << sumDigits(49) << "| 13" << endl;
  cout << sumDigits(12) << "| 3" << endl;
}
