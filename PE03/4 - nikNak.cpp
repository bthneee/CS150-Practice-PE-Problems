#include <iostream>
#include <string>
using namespace std;

string NikNak(const string& str)
{
    string result = "";
    int len = str.size();
    
    for(size_t i = 0; i < len; i++)
    {
        
            
            if(str.substr(i,1) == "n" && str.substr(i+2,1) == "k")
            {
                result += str.substr(i,1)+str.substr(i+2,1);
                i+=2;
            }
            else
            {
               result += str.substr(i,1); 
            }
        
        
    }
    
    return result;   
}

int main()
{
   
    cout << NikNak("nikXnak") << " | " << "nkXzp" << endl;
    cout << NikNak("noknok") << " | " << "nknk" << endl; 
    cout << NikNak("nnnoknok") << " | " << "nnnknk" << endl; 
}
