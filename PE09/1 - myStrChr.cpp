#include <iostream>
#include <string>

using namespace std;
/* The function has two parameters: a const char * s 
 * pointing to the first character in a C-style string, and a char c. 
 * Return a pointer to the first appearance of c appearing inside the s and nullptr(0)
 * if c does not appear inside s.
 */

char *myStrChr(const char *input, char c)
{
  const char *ch = nullptr;
  while(*input != '\0')
  {
    if(*input == c) ch = input;
    input++;
  }
  return ch;
}
