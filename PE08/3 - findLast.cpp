#include <cstring>
#include <iostream>
#include <string>

using namespace std;

char * findLast(char string[] , char substring[])
{
  int i, j = 0, k;
  char *p = 0;
  for(i = 0; string[i]; i++)
  {
    if(string[i] == substring[j])
    {
      for(k=i, j=0; string[k] && substring[j]; j++, k++)
      {
        if(string[k]!=substring[j]) break;
      }
      if(!substring[j])
      {
        p = &string[i];
        j = 0;
      }
    }
  }
  return p;
}

void CHECK(const char * s1, const char * s2, const string& expected)
{
  string msg = "findLast(\"" + string(s1) + "\", \"" + string(s2) + "\")";
  char d1[1024], d2[1024];
  strcpy(d1, s1);
  strcpy(d2, s2);
  auto p = findLast(d1, d2);
  string actual = (p ? string(p) : "nullptr");
  if(expected == actual)
    cout << " + " + msg + "->OK" << endl;
  else
    cout << " X " + msg + " expected<\"" + expected + "\">, found <\"" + actual + "\">" << endl;
}

int main()
{
   cout << "----------------------- TESTING ---------------------------" << endl;
   CHECK("Aardvark", "ar", "ark");
   CHECK("Aardvark", "a", "ark");
   CHECK("Aardvark", "r", "rk");
   CHECK("Aardvark", "K", "nullptr");
}
