#include <iostream>
#include <string>

using namespace std;

int stringMatch(const string& a, const string& b)
{
    int count = 0;
    int len;
    if (a.size() > b.size()) len = b.size();
    else len = a.size();
    
    for(int i = 0; i < len - 1; i++)
    {
        if(a[i] == b[i] && a[i + 1] == b[i + 1])
            count++;
    }
    return count;
}

int main()
{
    cout << stringMatch("xxcaazz", "xxbaaz" ) << "| 3" << endl;
    cout << stringMatch("abc", "abc") << "| 2" << endl;
    cout << stringMatch("abc", "axc") << "| 0" << endl;
    return 0;
}
