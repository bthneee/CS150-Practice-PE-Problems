#include <iostream>
#include <string>
using namespace std;

int luckSum(int, int, int);

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
    
    
    int result = luckSum(a,b, c); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// given 3 int values, a, b, and c, return their sum.
// however, if one of the values is 13 then it does not count towards the sum 
// and values to its right do not count

int luckSum(int a, int b, int c)
{
   int result;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
    if (a == 13)
    {
      result = 0;
    }
    else if (b == 13)
    {
      result = a;
    }
    else if (c == 13)
    {
    result = a + b;
    }
    else
    {
      result = a + b + c;
    }

   return result; 
}
