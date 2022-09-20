#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string triangleType(int a, int b, int c);

int main()
{
    int a;
    int b;
    int c;
    
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    
    string result = triangleType(a,b,c); 
    
    cout << "Output: " << result << endl; 
    
    return 0;
    
}

//return what type of triangle it is
//the three types are equilateral, isosceles, and scalene
//an equilateral triangle has all three sides the same length
//an isosceles triangle has two sides the same length
//a scalene triangle has three sides of different lengths 

string triangleType(int a, int b, int c)
{
    string result; 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE

   if (a == b && b == c)
   {
     result = "equilateral";
   }
   else if (a == b || b == c || a == c)
   {
     result = "isosceles";
   }
   else
   {
     result = "scalene";
   }   
    
    return result;
}
