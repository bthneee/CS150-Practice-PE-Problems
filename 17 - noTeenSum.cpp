#include <iostream>
#include <string>
using namespace std;

int noTeenSum(int a, int b, int c);

int main()
{ 
    int a; 
    cout << "Enter a: "; 
    cin >> a;  
    
    int b;
    cout << "Enter b: ";
    cin >> b; 
    
    int c;
    cout << "Enter c: ";
    cin >> c; 
    
    
    int result = noTeenSum(a,b,c); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// Given 3 int values, a b c, print their sum.
// however, if any of the values is a teen-in the range 13..19 inclusive- then that value counts as 0, 
// except 15 and 16 do not count as a teens 

// helper function
int teen(int n)
{
   if (n < 13 || n > 19 || n == 15 || n == 16)
  {
    return n;
  }
  return 0;
}

int noTeenSum(int a, int b, int c)
{
   int result =0;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE

   // use a helper function
   result =  teen(a) + teen(b) + teen(c);
   
   return result; 
}
