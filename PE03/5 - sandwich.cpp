#include <iostream>
#include <string>
using namespace std;

string sandwich(const string& str)
{
    string result= "";
    int len = str.size(); 
int f=str.find("bread");
 
int l=str.rfind("bread");
if(len <10) 
{
    result = "";
}
if (len >10 && f != -1 && l != -1)
{ 
    result=str.substr(f+5,l-(f+5));
}

return result;
       
}
int main()
{
   
    cout << sandwich("xxbreadbreadjambreadyy") << " | " << "breadjam" << endl;
    cout << sandwich("xxbreadjambreadyy") << " | " << "jam" << endl; 
    cout << sandwich("xxbreadyy") << " | " << "" << endl; 
}
