#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countEights(int n)
{
   //checking if digit is less than or equal to 0 (base condition)
   if (n <= 0)
   {
      //no 8s
      return 0;
   }

   //extracting last digit
   int digit = n % 10;
   //removing last digit
   n = n / 10;
   //checking if digit is 8
   if(digit == 8)
   {
   //checking if next last digit is 8
      if(n % 10 == 8)
      {
         //adding 2 to the result and summing with the number of 8s in n
         return 2 + countEights(n);
      }
      else
      {
         //adding 1 to the result and summing with the number of 8s in n
         return 1 + countEights(n);
      }
   }
   //adding nothing to the result and returning the number of 8s in n
   return countEights(n);
}


int main()
{
    cout << countEights(8) << "| 1" << endl;
    cout << countEights(818) << "| 2" << endl;
    cout << countEights(8818) << "| 4" << endl;
    return 0;
}
