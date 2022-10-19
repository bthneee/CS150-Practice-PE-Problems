#include <iostream>
#include <string>
using namespace std;

string starOut(const string& str)
{
    string result = "";
    int len = str.size();
    
        for(int i = 0; i < len; ++i) 
        {
            if(!(str.at(i) == '*' || (i != 0 && str.at(i-1) == '*') || (i != str.size()-1 && str.at(i+1) == '*'))) 
            {
                result += str.at(i);
            }
        }
        
    return result;   
}

int main()
{
   
    cout << starOut("ab*cd") << endl;
    cout << starOut("ab**cd") << endl; 
    cout << starOut("sm*eilly") << endl; 
