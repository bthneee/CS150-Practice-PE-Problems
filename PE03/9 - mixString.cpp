#include <iostream>
#include <string>

using namespace std;

string mixString(const string& a, const string& b)
{
    string result = "";
    int max;
    if(a.length() >= b.length()) max = a.length();
    else max = b.length();
    
    for(int i = 0; i < max; i++)
    {
        if(a.length() > i)
            result += a[i];
        if(b.length() > i)
            result += b[i];
    }
    
    return result;
}

int main()
{
    cout << mixString("abc", "xyz") << "| axbycz" << endl;
    cout << mixString("Hi", "There") << "| HTihere" << endl;
    cout << mixString("xxxx", "There") << "| xTxhxexre" << endl;
    return 0;
}
