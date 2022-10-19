#include <iostream>
#include <string>

using namespace std;

string repeatFront(const string& str, int n)
{
    string result = "";
    size_t len = str.size();
    
    for(int i = n; n > 0; n--)
    {
        result += str.substr(0, n);
    }
    return result;
}

int main()
{
    cout << repeatFront("Chocolate", 4) << "| ChocChoChC" << endl;
    cout << repeatFront("Chocolate", 3) << "| ChoChC" << endl;
    cout << repeatFront("Ice Cream", 2) << "| IcI" << endl;
    return 0;
}
