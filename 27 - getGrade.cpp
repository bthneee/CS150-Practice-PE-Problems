#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

double getGrade(int a);

int main()
{
    int a;
    
    cout<<"Enter score: ";
    cin>>a;
    
    double result = getGrade(a); 
    
    cout << "Output: " << result << endl; 
    
    return 0;
    
}
/*
 * Write a function that accepts an integer representing a student's 
 * grade in a course and returns that student's numerical course grade. The grade 
 * can be between 0.0 (failing) and 4.0 (perfect). Assume that scores are in the 
 * range of 0 to 100 and that grades are based on the following scale: 
 * 
 * Score 	Grade
 * <60   	0.0
 * 60-62 	0.7
 * 63 	    0.8
 * 64 	    0.9
 * 65 	    1.0
 * ... 	
 * 92 	    3.7
 * 93 	    3.8
 * 94 	    3.9
 * >=95 	  4.0
 */

double getGrade(int a)
{
    double result = 0.0; 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE

   // failing = <60
   if (a < 60)
   {
     result = 0.0;
   }
   else if (a <= 62)
   {
     result += 0.7;
   }
   else if (a <= 94)
   {
     // score = 63, grade = 0.8
     result = 0.8;
     for (int i = 63; i < a; i++)
     {
       // increment grade 0.1 as i increases to match score
       result += 0.1;
     }
   }
   // perfect: 95+
   else
   {
     result = 4.0;
   }
   
    return result;
}
