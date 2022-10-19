#include <iostream>
#include <string>

using namespace std;

string stringYak(const string& str)
{
    string result = "";
    
    for(int i = 0; i < str.size(); i++)
    {
        if(i + 2 < str.size() && str[i] == 'y' && str[i + 2] == 'k')
            i += 2;
        else
            result += str[i];
    }
    return result;
}

int main()
{
    cout << stringYak("yakpak") << "| pak" << endl;
    cout << stringYak("pakyak") << "| pak" << endl;
    cout << stringYak("yak123ya") << "| 123ya" << endl;
    return 0;
}
