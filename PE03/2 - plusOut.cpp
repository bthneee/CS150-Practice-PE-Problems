#include <iostream>
#inlcude <string> 
using namespace std;

string plusOut(const string& str, const string& s)
{
    string result = ""; 
    int len = str.size();
    int len2 = s.size(); 
    
    for(size_t i = 0; i < len; i++)
    {
        if(str.substr(i, len2) == s)
        {
            result += s; 
            i += len2-1; 
        }
        else
        {
           result+="+"; 
        }
    }
    
    return result; 
}

int main()
{
   
    cout << plusOut("12xy34", "xy") << endl;
    cout << plusOut("12xy34", "1") << endl; 
    cout << plusOut("12xy34xyabcxy", "xy") << endl; 
    
}
