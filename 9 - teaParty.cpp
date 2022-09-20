#include <iostream>
#include <string>
using namespace std;

string teaParty(int tea, int candy);

int main()
{ 
    int tea; 
    cout << "Enter amount of tea: "; 
    cin >> tea; 
     
    int candy; 
    cout << "Enter amount of candy: "; 
    cin >> candy; 
    
    string result = teaParty(tea,candy); 

    cout << "Output: " << result << endl; 
    
    return 0;
}

// a party is good if both tea and candy are at least five
// however, if either tea or candy is at least double the amount of the other one, the party is great
// however, in all cases, if either tea or candy is less than 5, the party is always bad. 

string teaParty(int tea, int candy)
{
   string result;
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   
   if (tea < 5 || candy < 5)
   {
     result = "Bad";
   }
   else if (tea >= (candy * 2) || candy >= (2 * tea))
   {
     result = "Great";
   }
   else
   {
     result = "Good";
   }

   return result;
}
