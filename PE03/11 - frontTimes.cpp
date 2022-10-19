#include <iostream>
#include <string>

using namespace std;

string frontTimes(const string& str, int n)
{
    string result = "";
    string front = str.size() < 3 ? str : str.substr(0, 3);
    
    for(int i = 0; i < n; i++)
    {
        result += front;
    }


    return result;
}

int main()
{
    cout << frontTimes("Chocolate", 2) << "| ChoCho" << endl;
    cout << frontTimes("Chocolate", 3) << "| ChoChoCho" << endl;
    cout << frontTimes("Abc", 3 ) << "| AbcAbcAbc" << endl;
    return 0;
}
