#include <iostream>
#include <string>
using namespace std;

int loneSum(int a, int b, int c);

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
    
    
    int result = loneSum(a,b, c); 

    cout << "Output: " << result << endl; 
    
    return 0;
}
// given 3 int values, a b c, print their sum
// however, if one of the values is the same as another of the values, it does not count towards sum. 

int loneSum(int a, int b, int c)
{
   int result;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   // a, b, and c are the same
   if (a == b && b == c)
   {
     result = 0;
   }
   // a and b don't count
   else if (a == b)
   {
     result = c;
   }
   // b and c don't count
   else if (b == c)
   {
   result = a;
   }
   // a and c don't count
   else if (a == c)
   {
   result = b;
   }
   // all sum otherwise
   else
   {
     result = a + b + c;
   }
   return result; 
}
