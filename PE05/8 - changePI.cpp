#include <iostream>
#include <string>
#include <vector>

using namespace std;

string changePI(const string& str)
{
    if(str == "" || str.size() < 2) return str;
    if(str[0] == 'p' && str[1] == 'i')
        return "3.14" + changePI(str.substr(2));
    return str[0] + changePI(str.substr(1));
}


int main()
{
    cout << changePI("xpix") << "| x3.14x" << endl;
    cout << changePI("pipi") << "| 3.143.14" << endl;
    cout << changePI("pip") << "| 3.14p" << endl;    
    
    return 0;
}
