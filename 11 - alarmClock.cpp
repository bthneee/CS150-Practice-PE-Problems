#include <iostream>
#include <string>
using namespace std;

string alarmClock(int a, bool b);

int main()
{ 
    int a; 
    cout << "Enter a: "; 
    cin >> a;  
    
    bool b;
    cout << "Enter 1: for true || Enter 0: for false ";
    cin >> b; 
    
    string result = alarmClock(a,b); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// Given an input of a day of the week encoded as 0= Sun, 1=Mon, ...6=Sat, 
// and a boolean indicating if we are on vacation, 
// print a string of the form "7:00" indicating if when the alarm clock should ring
// weekdays, the alarm should be "7:00" and on the weekend it should be "10:00"
// Unless we are on vacation=then on weekdays it should be "10:00" and weekends it should be "off".
// dont put quotes around your answer. i will do that

string alarmClock(int a, bool b)
{
   string result;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   if (b == 1)
   {
     if (a == 0 || a == 6)
     {
       result = "Off";
     }
     else
     {
       result = "10:00";
     }
   }
   if (a == 0 || a == 6)
   {
     result = "10:00";
   }
   else
   {
     result = "7:00";
   }
   

   return result; 
}
