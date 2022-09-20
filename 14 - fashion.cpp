#include <iostream>
#include <string>
using namespace std;

string fashion(int a, int b);

int main()
{ 
    int a; 
    cout << "Your style: "; 
    cin >> a;  
    
    int b;
    cout << "Your date's style: ";
    cin >> b; 
    
    string result = fashion(a,b); 

    cout << "Output: " << result << endl; 
    
    return 0;
}



string fashion(int a, int b)
{
   string result = "";
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
  if (a <= 2 || b <= 2)
  {
    result = "What? No way bruh";
  }
  else if (a >= 8 || b >= 8)
  {
    result = "Hell yea";
  }
  else
  {
    result = "Hmm, maybe";
  }

   return result; 
}
