#include <iostream>
#include <string>

using namespace std;

int sumLimit(int, int);


int main()
{ 
    int a; 
    cout << "Enter int a: "; 
    cin >> a; 
     
    int b; 
    cout << "Enter int b: "; 
    cin >> b; 
     
    
    int sum = sumLimit(a,b); 
    
    cout << "Sum Limit: " << sum << endl; 
    
    return 0;
}


    // given 2 postive ints, a and b, print their sum, so long as the sum 
    // has the same number of digits as a. 
    // if the sum has more digits than a, just return a without b. 

int sumLimit(int a, int b)
{
   int result = 0;

   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
    int sum = a + b;
    // to_string converts an int into a string in order to get the length of the number
    // I don't think we learned it yet but it's shorter than doing mods
    int aLength = to_string(a).length();
    int sumLength = to_string(sum).length();
    
    if (sumLength == aLength)
    {
      result = sum;
    }
    else
    {
      result = a;
    }
     return result;
}
