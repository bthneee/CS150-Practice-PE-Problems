#include <iostream>
#include <string>

using namespace std;

int maxMod(int a, int b);

int main()
{ 
    int a; 
    cout << "Enter int a: "; 
    cin >> a; 
     
    int b; 
    cout << "Enter int b: "; 
    cin >> b; 
        
    int sum = maxMod(a, b); 
    
    cout << "Max: " << sum << endl; 
    
    return 0;
}

/* Given two int values, return whichever value is larger. However if the two 
 * values have the same remainder when divided by 5, then the return the 
 * smaller value. However, in all cases, if the two values are the same, 
 * return 0.
 */

int maxMod(int a, int b)
{
   int result = 0;

   // ---- YOUR CODE GOES ONLY BELOW THIS LINE

  // if a and b have the same remainder when divided by 5
  if (a % 5 == b % 5)
  {
    // returns the smaller of the two arguments a and b
    result = min(a, b);
  }
  else
  {
    // returns the larger of the two arguments a and b
    result = max(a, b);
  }

  // if a and are the same
  if (a == b)
  {
    result = 0;
  }
  return result;
}
