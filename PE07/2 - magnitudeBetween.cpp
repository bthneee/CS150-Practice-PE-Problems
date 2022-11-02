#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Star {
	double x, y, magnitude;
	int dipper;
	string names;
};

vector<size_t> magnitudeBetween(vector<Star> vStars, double upper, double lower)
{
  //Declare a vector indexes
  vector<size_t> indexes;
  //Loop through all the elements in the vStars vector
  for (int i = 0; i < vStars.size(); i++)
  {
    //Check if magnitude is between upper & lower bound, if true add the index of the star to the vector indexes
    if (vStars[i].magnitude > lower && vStars[i].magnitude < upper )
      indexes.push_back(i);
  }

  //Return the vector indexes
  return indexes;
}
