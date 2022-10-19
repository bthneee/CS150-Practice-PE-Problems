#include <iostream>
#include <string>

using namespace std;

string stringSplosion(const string& str)
{
    string result = "";
    size_t len = str.size();
    
    for(int i = 0; i < len + 1; i++)
    {
        result += str.substr(0, i);
    }
        return result;
}

int main()
{
    cout << stringSplosion("Code") << "| CCoCodCode" << endl;
    cout << stringSplosion("abc") << "| aababc" << endl;
    cout << stringSplosion("ab") << "| aab" << endl;
    return 0;
}
