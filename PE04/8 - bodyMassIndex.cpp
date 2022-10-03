#include <iostream>

using namespace std;

double bmiCalc(double height, double weight, int& bmiClass)
{
  const int CONVERSION_FACTOR = 703;
  // bmi = 703 * (weight / height^2)
  double bmi = weight / (height * height) * CONVERSION_FACTOR;
  if(bmi >= 30)
    bmiClass = 4;
  else if(bmi >= 25)
    bmiClass = 3;
  else if(bmi >= 18.5)
    bmiClass = 2;
  else
    bmiClass = 1;
  return bmi;
}

int main()
{
  int bmiClass;
  double bmi = bmiCalc(70.0, 194.25, bmiClass);
  cout << "BMI = " << bmi << ", class " << bmiClass << endl;
    // BMI = 27.8689, class 3
 }
