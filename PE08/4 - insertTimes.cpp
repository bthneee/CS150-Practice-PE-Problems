/**
    CS 150 PARTIALLY FILLED ARRAYS

    Follow the instructions on your handout to complete the
    requested function. You may not use any library functions
    or include any headers, except for <cstddef> for size_t.
*/
#include <cstddef> // size_t for sizes and indexes
///////////////// WRITE YOUR FUNCTION BELOW THIS LINE ///////////////////////

bool insertTimes(int a[], size_t& size, int val, int pos, int times, int capacity)
{
    if(size + times > capacity) return false;
    if(pos > size) return false;
    int temp[size];
    size_t i;
    // create a copy of the original array
    for(i = 0; i < size; ++i)
    {
        temp[i] = a[i];
    }
    for(i = 0; i < times; ++i)
    {
        a[pos + i] = val;
    }
    for(size_t j = pos; j < size; j++, i++)
    {
        a[pos + i] = temp[j];
    }
    size += times;
    return true;
}

///////////////// WRITE YOUR FUNCTION ABOVE THIS LINE ///////////////////////
// These are OK after the function
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string toString(const int a[], size_t size);
void studentTests()
{
    cout << "Student testing. You may add more code in this function." << endl;
    cout << "-------------------------------------------------------------" << endl;
        
    const size_t CAP = 30;
    {
        int a[CAP] = {72, 13, 32, 48, 29, 75, 68};								// insert in the middle	
        size_t size = 7;
        cout << boolalpha;
        cout << "\n(1) TESTING insertTimes(a, size, 10, 5, 3 CAP)" << endl;
        cout << "      Before->" << toString(a, size) << endl;
        bool result = insertTimes(a, size, 10, 5, 3, CAP);
        cout << "       After->" << toString(a, size)
            << ", result->" << result << endl;	
        cout << "    Expected->[72, 13, 32, 48, 29, 10, 10, 10, 75, 68], result->true\n";
    }
    {
        int a[CAP] = {72, 13, 32, 48, 29, 75, 68};								// insert in the middle	
        size_t size = 7;
        cout << boolalpha;
        cout << "\n(2) TESTING insertTimes(a, size, 10, 7, 3 CAP) (Insert at end)" << endl;
        cout << "      Before->" << toString(a, size) << endl;
        bool result = insertTimes(a, size, 10, 7, 3, CAP);
        cout << "       After->" << toString(a, size)
            << ", result->" << result << endl;	
        cout << "    Expected->[72, 13, 32, 48, 29, 75, 68, 10, 10, 10], result->true\n";
    }
    {
        int a[CAP] = {72, 13, 32, 48, 29, 75, 68};								// insert in the middle	
        size_t size = 7;
        cout << boolalpha;
        cout << "\n(3) TESTING insertTimes(a, size, 10, 8, 3 CAP) (Insert past end)" << endl;
        cout << "      Before->" << toString(a, size) << endl;
        bool result = insertTimes(a, size, 10, 8, 3, CAP);
        cout << "       After->" << toString(a, size)
            << ", result->" << result << endl;	
        cout << "    Expected->[72, 13, 32, 48, 29, 75, 68], result->false\n";
    }
    {
        int a[CAP] = {72, 13, 32, 48, 29, 75, 68};								// insert in the middle	
        size_t size = 7;
        cout << boolalpha;
        cout << "\n(4) TESTING insertTimes(a, size, 10, 5, 25 CAP) (Insert too many)" << endl;
        cout << "      Before->" << toString(a, size) << endl;
        bool result = insertTimes(a, size, 10, 5, 25, CAP);
        cout << "       After->" << toString(a, size)
            << ", result->" << result << endl;	
        cout << "    Expected->[72, 13, 32, 48, 29, 75, 68], result->false\n";
    }

    cout << endl;
    cout << "--done--" << endl;
}

string toString(const int a[], size_t size)
{
    ostringstream out;
    out << '[';
    if (size > 0)
    {
        out << a[0];
        for (size_t i = 1; i < size; i++)
            out << ", " << a[i];
    }
    out << ']';
    return out.str();
}

int main()
{
    studentTests();
}

