#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

string movieProblem(double, int);

int main()
{
    double a;
    int b; 
    
    cout<<"Enter ticket price: ";
    cin>>a;
    cout<<"Enter stars: ";
    cin>>b;
    
    string result = movieProblem(a, b); 
    
    cout << "Output: " << result << endl; 
    
    return 0;
    
}
/* 
 * Given two inputs: the cost of a ticket in dollars, 
 * and the number of stars the movie received out of 5, you should print console output
 * about how interested you are; "very interested", "sort-of interested", 
 * or "not interested", based on the following criteria:
 * - You like bargains. A movie that costs less than $5.00 is one that you want to see very much.   // very interested
 * - You dislike expensive movies. You are not interested in seeing any movie that costs            // not intereseted
 *   $12.00 or more, unless it got 5 stars (and even then, you are only sort-of interested).        // 5* = sort-of interested
 * - You like quality. You are very interested in seeing 5 star movies that cost under $12.00.      // very interested
 * - You are sort-of interested in seeing movies costing between $5.00 - $11.99 that also           // sort-of interested
 *   got between 2-4 stars inclusive.
 * - You are not interested in seeing any other movies not described previously.                    // all else = not interested
 */

string movieProblem(double a, int b)
{
    string result = ""; 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   if (a < 5)
   {
     result = "very interested";
   }
   else if (a < 12 && b == 5)
   {
     result = "very interested";
   }
   else if (a >= 12)
   {
     if (b == 5)
     {
       result = "sort-of interested";
     }
     else
     {
       result = "not interested";
     }
   }
   else if ( a >= 5 && a <= 11.99 && b >= 2 && b <= 4)
   {
     result = "sort-of interested";
   }
   else
   {
     result = "not-interested";
   }
   
    return result;
}
