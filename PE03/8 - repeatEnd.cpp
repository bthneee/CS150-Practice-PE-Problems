#include <iostream>
#include <string>

using namespace std;

string repeatEnd(const string& str, int n)
{
    string result = "";
    size_t len = str.size();
    
    for(int i = 0; i < n; i++)
    {
        result += str.substr(len - n, len);
    }
    return result;
}

int main()
{
    cout << repeatEnd("Hello", 3) << "| llollollo" << endl;
    cout << repeatEnd("Hello", 2) << "| lolo" << endl;
    cout << repeatEnd("Hello", 1) << "| o" << endl;
    return 0;
}
