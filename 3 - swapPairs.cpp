#include <iostream>

using namespace std;

int swapPairs(string& s)
{   int count = 0;
    int n, i;
    if(s.size()%2 == 1) {n = s.size()-1;}
    else {n = s.size();}
    for(i=0; i<n; i += 2)
    {   char temp = s[i];
        s[i] = s[i+1];
        s[i+1] = temp;
        count++;        }
    return count;
}
