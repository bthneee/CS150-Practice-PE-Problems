#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int daysInMonth(int a);

int main()
{
    int a;
        
    cout<<"Enter a: ";
    cin>>a;
        
    int result = daysInMonth(a); 
    
    cout << "Output: " << result << endl; 
    
    return 0;
    
}

//given an integer as input, representing a month(1 for january, 2 for february, and so on)
//print the number of days in that month in a non-leep-year(that february always has 28 days)

int daysInMonth(int a)
{
    int result = 0; 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   // February
   if (a == 2)
   {
     result = 28;
   }
   // 30 days
   else if (a == 4 || a == 6 || a == 9 || a == 11)
   {
     result = 30;
   }
   // 31 days
   else
   {
     result = 31;
   }

    return result;
}
