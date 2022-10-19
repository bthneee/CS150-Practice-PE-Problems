#include <iostream>
#include <string>
using namespace std;

string wordEnds(const string& str, const string& s)
{
    string result = ""; 
    int len = str.size();
    int len2 = s.size();
    if(str.substr(0,len2) == s)
    {
        result += str.substr(len2,1);
    }
    for(size_t i = 1; i < len; i++)
    {
  //      cout <<str.substr(i,len2);
            
        if(str.substr(i, len2) == s)
        {
            result += str.substr(i-1,1)+str.substr(i+len2,1);
        } 
    }

int main()
{
   
    cout << plusOut("abcXY123XYijk", "XY") << endl;
    cout << plusOut("XY123XY", "XY") << endl; 
    cout << plusOut("XY1XY", "XY") << endl; 
    
}
