#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int binToDec(int& a)
{
   int b = a;
   int decimal = 0;
   int i = 0;
   while (a > 0)
   {
      decimal += a % 10 * pow(2, i);
      i++;
      a = a / 10;
   }
   a = decimal;
   return b;
   
}

int main()
{
  int a = 101011;
  int b = binToDec(a);
  cout << "a -> " << a << ",b -> " << b << endl;
}
