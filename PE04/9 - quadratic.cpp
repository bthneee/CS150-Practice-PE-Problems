#include <iostream>
#include <cmath>
using namespace std;

void quadratic(int a, int b, int c, double& root1, double& root2) 
{
    // formula under the square root
    double d = b * b - 4 * a * c;
    // square root
    d = pow(d, 0.5);
    // add
    root1 = (-b + d) / (2 * a);
    // subtract
    root2 = (-b - d) / (2 * a);
}

int main() {
    int a, b, c;
    double r1, r2;
    cout << "Enter three coefficients: ";
    cin >> a >> b >> c;
    quadratic(a, b, c, r1, r2);
    cout << "Roots are " << r1 << " and " << r2 << endl;
    return 0;
}
