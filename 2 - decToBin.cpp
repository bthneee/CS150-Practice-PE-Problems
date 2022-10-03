#include <iostream>
#include <cmath>
using namespace std;

int decToBin(int n)
{
  int binaryNumber = 0;
  int remainder, i = 1, step = 1;

  while (n != 0)
  {
    remainder = n % 2;
    n /= 2;
    binaryNumber += remainder * i;
    i *= 10;
  }
  return binaryNumber;
}

int main()
{
  int a = 43;
  cin >> a;
  int b = decToBin(a);
  cout << "b -> " << b << ", a -> " << a << endl;
  return 0;
}
