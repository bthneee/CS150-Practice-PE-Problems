#include <iostream>
#include <string>

using namespace std;

string stringBit(const string& str)
{
    string result = "";
    size_t len = str.size();
    
    for(int i = 0; i < len; i += 2)
    {
        result += str[i];
    }
    

    return result;
}

int main()
{
    cout << stringBit("Hello") << "| Hlo" << endl;
    cout << stringBit("Hi") << "| H" << endl;
    cout << stringBit("Heeololeo") << "| Hello" << endl;
    return 0;
}
