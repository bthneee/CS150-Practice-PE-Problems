#include <iostream>
#include <string>
using namespace std;

int tooFast(int speed, bool birthday);

int main()
{ 
    int speed; 
    cout << "Enter Speed: "; 
    cin >> speed;  
    
    bool birthday;
    cout << "Is it your birthday?" << endl; 
    cout << "Enter 1: for true || Enter 0: for false ";
    cin >> birthday; 
    
    int result = tooFast(speed,birthday); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// You are driving a little too fast, and a police officer stops you. Write code to compute the result,
// encoded as an int value: 0=no ticket, 25=small ticket, 275=big ticket. 
// if speed is 60 or less, there is no ticket. 
// if speed is between 61 and 80 inclusive, the result is a small ticket. 
// if speed is 81 or more, the result is a large ticket. 
// unless it is your birthday-on that day, your speed can be 5 higher in all cases. 

int tooFast(int speed, bool birthday)
{
   int result = 0;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   // Happy birthday!!
   if (birthday == 1)
   {
     if (speed <= 64)
     {
       result = 0;
     }
     // small ticket
     else if (speed >= 66 && speed <= 85)
     {
       result = 25;
     }
     // big ticket stupid
     else if (speed >= 86)
     {
       result = 275;
     }
   }
   // No birthday...
   else
   {
     if (speed <= 60)
     {
       result = 0;
     }
     // small ticket
     else if (speed >= 61 && speed <= 80)
     {
       result = 25;
     }
     // big ticket haha
     else 
     {
       result = 275;
     }
   }

   return result; 
}
