#include <iostream>
#include <string>

using namespace std;

int redTicket(int, int, int);


int main()
{ 
    int a; 
    cout << "Enter int a: "; 
    cin >> a; 
     
    int b; 
    cout << "Enter int b: "; 
    cin >> b; 
     
    int c; 
    cout << "Enter int c: "; 
    cin >> c; 
    
    int payout = redTicket(a,b,c); 
    
    cout << "Payout: " << payout << endl; 
    
    return 0;
}


    // if they are all the value 2, the result is 10
    // otherwise if they are all the same, the result is 5; 
    // otherwise so long as both b and c are different from a, the result is 1

int redTicket(int a, int b, int c)
{
   int result = 0;

   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   // all equals 2
    if (a == 2 && b == 2 && c == 2)
    {
      result = 10;
    }
    // all equal
    else if (a == b && b == c)
    {
      result = 5;
    }
    // b is the same as c; a is different
    else if (a != b || a != c && b == c)
    {
      result = 1;
    }
    // anything else
    else
    {
      result = 0;
    }
   
     return result;
}
