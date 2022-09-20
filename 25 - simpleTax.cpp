#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

double simpleTax(double);

int main()
{
    int a;
    
    cout<<"Enter a: ";
    cin>>a;
    
    double result = simpleTax(a); 
    cout << fixed << setprecision(2); 
    cout << "tax: " << result << endl; 
    
    return 0;
    
}

//given a salary as input, print the amount of tax you would owe if you make that salary
//tax is based on your tax bracket as found from the first two columns
//once you know which row to use, start with the "flat amount" and add the "plus %" of the amount
//over the amount listed in the final column

double simpleTax(double a)
{
    double result = 0; 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
   if (a > 0 && a <= 7150)
   {
     // result = flat amount + (plus% * (income - excess over)) / 100
     result = (10 * a) / 100;
   }
   else if (a > 7150 && a <= 29050)
   {
     result = 715 + (15 * (a - 7150)) / 100;
   }
   else if (a > 29050 && a <= 70350)
   {
     result = 4000 + (25 * (a - 29050)) / 100;
   }
   else if (a > 70350)
   {
     result = 14325 + (28 * (a - 70350)) / 100;
   }

    return result;
}
