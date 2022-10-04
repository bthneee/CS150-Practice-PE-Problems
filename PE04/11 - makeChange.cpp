
#include <iostream>

using namespace std;

void makeChange(double& cost, double& amount, int quarters, int dimes, int cents) 
{
  double change = amount - cost;
  int dollars = (int) change;
  change -= dollars;

  quarters = (int) (change / 0.25);
  change = change - (quarters * 0.25);

  dimes = (int) (change / 0.10);
  change = change - (dimes * 0.1);

  const double CONVERSION_FACTOR = 0.005
  cents = (int) ((change + CONVERSION_FACTOR) / 0.01);

}

int main() {
    int quarters, dimes, cents;
    int dollars = makeChange(1.08, 5.00, quarters, dimes, cents);
    cout << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, and " << cents << " cents" << endl;
      //  3 dollars, 3 quarters, 1 dimes, and 7 cents
    return 0;
}
