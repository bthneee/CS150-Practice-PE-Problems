#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int countYZ(const string& str)
{
    int count = 0;
    size_t len = str.size();
    
    for(int i = 0; i < len; i++)
    {
        if(tolower(str[i]) == 'y' || tolower(str[i]) == 'z')
        {
            if(i < len - 1 && !isalpha(tolower(str[i + 1])))
                count++;
            else if (i == len - 1)
                count++;
        }
    }
    return count;
}

int main()
{
    cout << countYZ("hixxhi") << "| 1" << endl;
    cout << countYZ("xaxxaxaxx") << "| 1" << endl;
    cout << countYZ("axxxaaxx") << "| 2" << endl;
    return 0;
}
