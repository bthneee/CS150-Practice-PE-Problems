#include <iostream>
#include <string.h>
using namespace std;

/*  Write the function findAny(). The function has two parameters:
 *  a const char *s pointing to the first character in a C-style string,
 *  and a const char * letters. Return the index of the first character
 *  in s that matches any letter inside letters. Return -1 if no letters match.
 */
 
int findAny(const char* s, const char* letters)
{
  int i, j, len1 = strlen(s), len2 = strlen(letters);
  for (i = 0; i < len1; i++) 
  {
    for (j = 0; j < len2; j++) 
    {
      if (s[i] == letters[j]) return i;
    }
  }
  return -1;
}

int main()
{
  cout << findAny("ABCDE", "QWERTY") << endl;
  cout << findAny("QWERTY", "ABCDE") << endl;
  return 0;
}
