#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int quadrantProblem(double a, double b);

int main()
{
    double a;
    double b;
    
    
    cout<<"Enter x: ";
    cin>>a;
    cout<<"Enter y: ";
    cin>>b;

    int result = quadrantProblem(a,b); 
    
    cout << "Output: " << result << endl; 
    
    return 0;
    
}

/* Given a pair of real numbers representing an (x, y) point, 
 * print the quadrant number for that point. 
 * Recall that quadrants are numbered as integers from 1 to 4 with the upper-right
 * quadrant numbered 1 and the subsequent quadrants numbered in a counter-clockwise fashion.
 * Notice that the quadrant is determined by whether the x and y coordinates are positive or
 * negative numbers. If a point falls on the x-axis or the y-axis, then quadrant is 0. 
 */

int quadrantProblem(double a, double b)
{
    int result = 0; 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE

   // quadrant 1
   if (a > 0 && b > 0)
   {
     result = 1;
   }
   // quadrant 2
   else if (a < 0 && b > 0)
   {
     result = 2;
   }
   // quadrant 3
   else if (a < 0 && b < 0)
   {
     result = 3;
   }
   // quadrant 4
   else if (a > 0 && b < 0)
   {
     result = 4;
   }
   // all else
   else
   {
     result = 0;
   }
        
    return result;
}
