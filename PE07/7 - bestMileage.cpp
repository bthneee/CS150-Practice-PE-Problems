#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Car
{
  string mfg, model;
  int horsepower, cylinders;
  double mpg;
};

// Returns manufacturer and model names vector by reference
double bestMileage(vector <Car>vCars, vector <string> &vMileage)
{
  // To store total
  double total = 0;

  // Loops till number of cars
  for(int x = 0; x < vCars.size(); x++)
  {
    // Calculates total
    total += vCars.at(x).mpg;
    // Inserts the car manufacturer name concatenated with semicolon and model
    vMileage.push_back(vCars.at(x).mfg + "; " + vCars.at(x).model);
  }

  // Calculates and returns average
  return total / vCars.size();
}
