#include <iostream>

using namespace std;

int swapPairs(string& s)
{   int count = 0;
    int n, i;
 
    // if s.size() is odd
    if(s.size() % 2 == 1) 
    {
        n = s.size() - 1;
    }
    // if s.size() is even
    else 
    {
        n = s.size();
    }
    
    // swap
    for(i = 0; i < n; i += 2)
    {   
        char temp = s[i];
        s[i] = s[i + 1];    // swaps places with next char in string
        s[i + 1] = temp;
        count++;            // counts # of swaps
    }
    return count;
}
