#include <iostream>
#include <string>
using namespace std;

string fizzString(string& str);

int main()
{ 
    string str; 
    cout << "Enter a string: "; 
    getline(cin, str); 
    
    
    string result = fizzString(str); 

    cout << "Output: " << result << endl; 
    
    return 0;
}
// given an input string str, if the string starts with "f"(either upper or lower),print 'Fizz"
// if the string end with "b"(either upper or lowercase), print "buzz". 
// if both the "f" and "b" conditions are true, print "FizzBuzz". 
// otherwise, print the string unchanged
// do not put quotes around your output. 

string fizzString(string& str)
{
   string result = str;
 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE

  int n = str.length();

  if (n > 0 && str[0] == 'f' && str[n - 1] == 'b')
  {
    result = "FizzBuzz";
  }
  else if (n > 0 && str[0] == 'f')
  {
    result = "Fizz";
  }
  else if (n > 0 && str[n - 1] == 'b')
  {
    result = "Buzz";
  }

   return result;
}
