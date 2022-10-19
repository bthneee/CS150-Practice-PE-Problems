#include <iostream>
#include <string>

using namespace std;

int lastTwo(const string& str)
{
    int count = 0;
    size_t len = str.size();
    
    // if len < 2, count cannot be > 2, therefore return 0
    if(len < 2) count = 0;
    
    // 
    for(int i = 0; i < len - 2; i++)
    {
        // if substr of length 2 is the same as the last 2 char, increase count
        if(str.substr(i, i + 2) == str.substr(len - 2, len))
            count++;
    }
    return count;
}

int main()
{
    cout << lastTwo("hixxhi") << "| 1" << endl;
    cout << lastTwo("xaxxaxaxx") << "| 1" << endl;
    cout << lastTwo("axxxaaxx") << "| 2" << endl;
    return 0;
}
