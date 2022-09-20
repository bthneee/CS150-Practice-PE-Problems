#include <iostream>
#include <string>
using namespace std;

int noDoubles(int a, int b, bool c);

int main()
{ 
    int a; 
    cout << "Enter int a: "; 
    cin >> a; 
     
    int b; 
    cout << "Enter int b: "; 
    cin >> b; 
    
    bool c; 
    cout << "enter 1: for true | enter 0: for false "; 
    cin >> c; 
    
    int result = noDoubles(a,b,c); 

    cout << "Sum: " << result << endl; 
    
    return 0;
}
//print the sum of 2 6-sided dice rolls, each in the range 1-6. 
// however, if noDoubles (the third value input) is true 
// (and, if the two dice show the same value, increment one die to the next value
// wrapping around to 1 if its value was 6.) 

int noDoubles(int a, int b, bool c)
{
   int result = 0;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   if (c == 1 && a == b)
   {
     a++;
     if (a == 7)
     {
       a = 1;
     }
   }
  result = a + b;
   
     return result;
}
