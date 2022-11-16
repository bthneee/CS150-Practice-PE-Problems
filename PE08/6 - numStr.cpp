#include <iostream>
#include <string>
#include <cstring>
#include <cstddef> // size_t for sizes and indexes
using namespace std;

/*  Write the function numStr(). The function has two parameters:
 *  a const char * s1 pointing to the first character in a C-style string,
 *  and a const char * s2. Return the number of times that s2 
 *  appears inside s1.
 */

// ------------------------- numStr() --------------------------- //
int numStr(const char *s1, const char *s2) 
{
  int i=0, j, found, count=0;
  while(s1[i]) 
  {
    j = 0;
    found = 1;
    while(s2[j]) 
    {
      if(s1[i + j] != s2[j]) 
      {
        found=0;
        break;
      }
      j++;
    }
    if(found) count++;
    i++;
  }
  return count;
}

// --------------------------- TESTING ----------------------------- //
void CHECK(const char * s1, const char* s2, int expected)
{
  char d1[1024], d2[1024];
  strcpy(d1, s1);
  strcpy(d2, s2);
  string msg = "numStr(\"" + string(d1) + "\", \"" + string(d2) + "\")";
  int actual = numStr(d1, d2);
  if (expected == actual)
    cout << " + " + msg + "->OK" << endl;
  else
    cout << " X " + msg + " expected<" << expected << ">, found <" << actual << ">" << endl;
}

int main()
{
  cout << "--------------------- TESTING -------------------------" << endl;
  CHECK("abaracadabara", "a", 7);
  CHECK("abaracadabara", "ab", 2);
  CHECK("abaracadabara", "bara", 2);
  CHECK("abaracadabara", "cad", 1);
  CHECK("abaracadabara", "A", 0);
}
