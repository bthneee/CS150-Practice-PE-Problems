#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

struct Camera
{
  string manufacturer;
  string model;
  int releaseYear;
  int resolution;
  int weight;
  double price;
};

vector<string> bestValue(vector<Camera> v)
{
  vector<string> output;
  // compute best value for each manufacturer
  int i = 0;
  string current_m = v[0].manufacturer;
  // best value till now
  float best_value = v[0].resolution / v[0].price;
  int best = 0;
  while (i <= v.size())
  {
    // if current manufacturer is not same, or end of vector
    if (v[i].manufacturer != current_m || i == v.size())
    {
      ostringstream out;
      // create string in given format
      out << v[best].manufacturer << ":" << v[best].model << " " << v[best].resolution << ":$" << v[best].price;
      // add best to output vector
      output.push_back(out.str());
    }
    else
    {
      // compute current best value
      float current_b = v[i].resolution / v[i].price;
      // if current best is > best
      if (current_b > best_value)
        best = i;
    }
  }
  return output;
}
