#include <iostream>
#include <string>

using namespace std;

int greenTicket(int, int, int);


int main()
{ 
    int a; 
    cout << "Enter int a: "; 
    cin >> a; 
     
    int b; 
    cout << "Enter int b: "; 
    cin >> b; 
     
    int c; 
    cout << "Enter int c: "; 
    cin >> c; 
    
    int payout = greenTicket(a,b,c); 
    
    cout << "Payout: " << payout << endl; 
    
    return 0;
}

/* You have a green lottery ticket, with ints a, b, and c on it. 
 * If the numbers are all different from each other, the result is 0. 
 * If all of the numbers are the same, the result is 20. If two of the
 * numbers are the same, the result is 10.
 */

int greenTicket(int a, int b, int c)
{
   int result = 0;

   // ---- YOUR CODE GOES ONLY BELOW THIS LINE

    // all numbers different
    if (a != b && b != c && a != c)
    {
      result = 0;
    }
    // all numbers same
    else if (a == b && b == c && a == c)
    {
      result = 20;
    }
    // two numbers same
    else
    {
      result = 10;
    }

     return result;
}
