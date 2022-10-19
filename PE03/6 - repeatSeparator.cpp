#include <iostream>
#include <string>

using namespace std;

string repeatSeparator(const string& word, const string& sep, int count)
{
    string newWord = "";
    for(int i = 0; i < count; i++)
    {
        if(i < count - 1)
            newWord += word + sep;
        else
            newWord += word;
    }
    return newWord;
}

int main()
{
    cout << repeatSeparator("Word", "X", 3) << "| WordXWordXWord" << endl;
    cout << repeatSeparator("This", "And", 2) << "| ThisAndThis" << endl;
    cout << repeatSeparator("This", "And", 1) << "| This" << endl;
    return 0;
}
