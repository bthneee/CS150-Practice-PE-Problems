#include <iostream>
#include <string>

using namespace std;

string stringX(const string& str)
{
    string result = "";
    size_t len = str.size();
    
    for(int i = 0; i < len; i++)
    {
        char temp = str[i];
        if(!(i > 0 && i < len - 1 && temp == 'x'))
            result += temp;
    }
    return result;
}

int main()
{
    cout << stringX("xxHxix") << "| xHix" << endl;
    cout << stringX("abxxxcd") << "| abcd" << endl;
    cout << stringX("xabxxxcdx") << "| xabcdx" << endl;
    return 0;
}
