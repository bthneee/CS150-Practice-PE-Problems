#include <iostream>
#include <string>

using namespace std;

int countCode(const string& str)
{
    int count = 0;
    size_t len = str.size();

    if(len < 4) return 0;
    
    for(int i = 0; i < len - 3; i++)
    {
        if(str[i] == 'c' && str[i + 1] == 'o' && str[i + 3] == 'e')
            count++;
    }
    return count;
}

int main()
{
    cout << countCode("aaacodebbb") << "| 1" << endl;
    cout << countCode("codexxcode") << "| 2" << endl;
    cout << countCode("cozexxcope") << "| 2" << endl;
    return 0;
}
