#include <iostream>
#include <string>
using namespace std;

string fizzBuzz(int a);

int main()
{ 
    int a; 
    cout << "Enter int a: "; 
    cin >> a; 
    
    string result = fizzBuzz(a); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

/* Given an int n, print the number followed by "!". So the int 6 prints "6!". 
 * Except if the number is divisible by 3 use "Fizz" instead of the number, 
 * and if the number is divisible by 5 use "Buzz",
 * and if divisible by both 3 and 5, use "FizzBuzz". 
 * Do not put the quotes around your output. 
 */

string fizzBuzz(int a)
{
   string result = "";
 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   // a is divisible by 3 and 5
    if (a % 15 == 0)
    {
      result = "FizzBuzz!";
    }
    // a is divisible by 3
    if (a % 3 == 0)
    {
      result = "Fizz!";
    }
    // a is divisible by 5
    if (a % 5 == 0)
    {
      result = "Buzz!";
    }
    // all else
    else
    {
      // to_string(a) converts int a into a string
      result = to_string(a) + "!";
    }

    return result;
}
