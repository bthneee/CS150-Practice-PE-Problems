#include <iostream>
#include<cstddef>
using namespace std;
char *findfirst(const char *s1,const char *s2) 
{
  int i = 0, j, found;
  int count = 0;
  while(s1[count] != 0)
  {
    count++;
  }
  while(s1[i] != 0) 
  {
    j = 0;
    found = 1;
    while(s2[j] != 0) 
    {
      if(s1[i + j] != s2[j]) 
      {
        found = 0;
        break;
      }
    j++;

    }
    if(found == 1 && s2[j] == 0) 
    {
      char s3[10000];

      for(int q = 0; q < count ; q++)
      {
        s3[q] = s1[q];
      }
      s3[count] = 0;
      return s3 + i;
    }
    i++;
  }
  return 0;
}

int main() {
  cout << findfirst("find me in this line", "me") << endl;
  cout << findfirst("find me in this line", "find") << endl;
  cout << findfirst("find me in this line", "line") << endl;
  if(findfirst("find me in this line", "blah") == NULL) 
  {
   cout<<"not found!\n";
  }
  return 0;
}
