#include <iostream>
#include <string>
using namespace std;

int roundSum(int a, int b, int c);
int round10(int a);

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
    
    
    int result = roundSum(a,b, c); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// Given 3 ints, a b c, return the sum of their rounded values.
// round an int value up to the next multiple of 10 if its rightmost digit is 5 or more, so 15 rounds up to 20. 
// Alternately, round down to the prvious multiple of 10 if its rightmost digit is less than 5, so 12 rounds down to 10. 

int roundSum(int a, int b, int c)
{
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   int result = round10(a) + round10(b) + round10(c);
   
   return result;
}

int round10(int a)
{
    // ---- YOUR CODE GOES ONLY BELOW THIS LINE
    int result;
    int digit = a % 10;
    if (digit >= 5)
    {
      result = a + (10 - digit);
    }
    else
    {
      result = a - digit;
    }

    return result;
}
