#include <iostream>
#include <string>

using namespace std;

int fibonacci(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
  cout << fibonacci(0) << "| 0" << endl;
  cout << fibonacci(1) << "| 1" << endl;
  cout << fibonacci(2) << "| 1" << endl;
}
