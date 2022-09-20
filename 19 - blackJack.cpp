#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int blackJack(int a, int b);

int main()
{ 
    int a; 
    cout << "Enter a: "; 
    cin >> a;  
    
    int b;
    cout << "Enter b: ";
    cin >> b; 
    
    int result = blackJack(a,b); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// given 2 int values greater 0, print whichever value is nearest to 21 without going over
// print 0 if they both go over

int blackJack(int a, int b)
{
   int result = 0;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   // bust?
   if (a > 21)
   {
     // bust!
     if (b > 21)
     {
       result = 0;
     }
     // safe
     else
     {
       result = b;
     }
   }
   else if (a < b && b <= 21)
   {
     result = b;
   }
   else
   {
     result = a;
   }
 
   return result; 
}
