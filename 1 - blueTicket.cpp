#include <iostream>
#include <string>

using namespace std;

int blueTicket(int, int, int);


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
    
    int payout = blueTicket(a,b,c); 
    
    cout << "Payout: " << payout << endl; 
    
    return 0;
}


//blue lottery ticket with ints a, b, and c on it. 
     // this makes three pairs, ab, bc, ac
     // consider the sum of the number in each pair
     // if any pairs sums to exaclty 10 the result is 10
     // (otherwise if the ab sum is exactly 10 more than 
     // the either bc or ac sums the result is 5)
     //otherwise the result is 0 
     // you will print the result 

int blueTicket(int a, int b, int c)
{
   int result = 0;

   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
    
    // given pairs
    int ab = a + b;     
    int bc = b + c;
    int ac = a + c;

    // sum of 10
    if (ab == 10 || bc == 10 || ac == 10)
    {
      result = 10;
    }
    // sum is +10 more
    else if (ab == bc + 10 || ab == ac + 10)
    {
      result = 5;
    }
    // all else
    else
    {
      result = 0;
    }
     
     return result;
}
