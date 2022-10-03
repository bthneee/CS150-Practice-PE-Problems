#include <iostream>
#include <cmath>
using namespace std;

void quadratic(int a, int b, int c, double& root1, double& root2) 
{
    // formula under the square root: b^2 - 4 * a * c
    double d = b * b - 4 * a * c;
    // square root 
    d = pow(d, 0.5);
    // add
    root1 = (-b + d) / (2 * a);
    // subtract
    root2 = (-b - d) / (2 * a);
}

int main() {
    // ax^2 + bx + c
    int a = 1, b = -3, c = -4;
    double r1, r2;
    quadratic(a, b, c, r1, r2);
    cout << "Roots are " << r1 << " and " << r2 << endl;
        // r1 = 4, r2 = -1
    return 0;
}
