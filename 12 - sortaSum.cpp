#include <iostream>
#include <string>
using namespace std;

int sortaSum(int a, int b);

int main()
{ 
    int a; 
    cout << "Enter a: "; 
    cin >> a;  
    
    int b;
    cout << "Enter b: ";
    cin >> b; 
    
    int result = sortaSum(a,b); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// Given 2 ints, a and b, print their sum. 
// However, sums in the range 10..19 inclusive, are forbidden, so in that case just print 20. 

int sortaSum(int a, int b)
{
   int result = 0;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   int sum = a + b;

   if (10 <= sum && sum <= 19)
   {
     result = 20;
   }
   else
   {
     result = sum;
   }

   return result; 
}
