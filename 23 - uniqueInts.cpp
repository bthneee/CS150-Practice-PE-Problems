#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int uniqueInts(int a, int b, int c);

int main()
{
    int a;
    int b;
    int c;
    
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
        
    int result = uniqueInts(a,b,c); 
    
    cout << "Output: " << result << endl; 
    
    return 0;
    
}

// print the number of unique values among the three.

int uniqueInts(int a, int b, int c)
{
    int result = 0; 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
    
    if (a != b)
    {
      result++;
    }
    if (b != c)
    {
      result++;
    }
    if (a != c)
    {
      result++;
    }
    if (a == b && b == c)
    {
      result++;
    }    

    return result;
}
