#include <iostream>
#include <string>
#include <vector>

using namespace std;

string starCrossed(const string& str)
{
   //checking if string length is 0 (base condition)
   if (str.length() == 0) 
   {
      //return string with no change
      return str;
   }

   string result = "";
   //appending char at 0 to result
   result += str[0];
   
   //if string contains more than 1 character
   if (str.length() > 1) 
   {
      //checking if character at index 1 is same as character at index 0
      if (str[1] == str[0]) 
      {
         //appending a '*' to result
         result += "*";
      }
   }
   //returning result combined with the result of recursive call to str, after removing
   //char at index 0
   return result + starCrossed(str.substr(1));
}

int main()
{
    cout << starCrossed("hello") << "| hel*lo" << endl;
    cout << starCrossed("xxyy") << "| x*xy*y" << endl;
    cout << starCrossed("aaaa") << "| a*a*a*a" << endl;
    return 0;
}
