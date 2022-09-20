#include <iostream>
#include <string>
using namespace std;

int teenSum(int a, int b);

int main()
{ 
    int a; 
    cout << "Enter int a: "; 
    cin >> a; 
     
    int b; 
    cout << "Enter int b: "; 
    cin >> b; 
    
    int result = teenSum(a,b); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// given 2 ints, a and b, print their sum 
// however, "teen" values in the range 13...19 inclusive, are extra lucky. 
// so either value is a teen, just print 19/ 
int teenSum(int a, int b)
{
   int result = 0;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   // if a or b is a teen number (13 - 19), print 19
   if((13 <= a && a <= 19) || (13 <= b && b <= 19))
   {
     result = 19;
   }
   // otherwise print the sum of a + b
   else
   {
     result = a + b;
   }

   return result; 
}
