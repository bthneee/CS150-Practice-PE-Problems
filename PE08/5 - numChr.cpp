#include <iostream>
#include <string>
#include <cstring>
#include <cstddef> // size_t for sizes and indexes
using namespace std;

/*  
 *  Write the function numChr(). The function has two parameters:
 *  a const char * s pointing to the first character in a C-style string,
 *  and a char c. Return the number of times that c appears inside s.
 */

// ---------------------------- numChr() ---------------------------------- //
int numChr(const char *str, char ch) 
{
  int count = 0, i = 0;
  while(str[i]) 
  {
    if(str[i] == ch) 
    {
      count++;
    }
    i++;
  }
  return count;
}

// ------------------------------ CASE TESTING------------------------------ //
void CHECK(const char * s, char c, int expected)
{
  char data[1024];
  strcpy(data, s);
  string msg = "numChr(\"" + string(data) + "\", '" + c + "')";
  int actual = numChr(data, c);
  if (expected == actual)
    cout << " + " + msg + "->OK" << endl;
  else
    cout << " X " + msg + " expected<" << expected << ">, found <" << actual << ">" << endl;
}

int main()
{
  cout << "------------------------- TESTING -----------------------" << endl;
  CHECK("Aardvark", 'a', 2);
  CHECK("Aardvark", 'k', 1);
  CHECK("Aardvark", 'k', 1);
  CHECK("abaracadabara", 'a', 7);
  CHECK("Aardvark", 'K', 0);
}
