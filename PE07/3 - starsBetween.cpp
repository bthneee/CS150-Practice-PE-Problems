#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Star {
	double x, y, magnitude;
	int dipper;
	string names;
};

double starsBetween(const vector<Stars> &vStars, vector<string> &names, double low, double high)
{
  double sum = 0;
  names.clear();
  for(int i = 0; i < vStars.size(); i++)
  {
    if(vStars[i].magnitude > low && vStars[i].magnitude < high)
    {
      sum += vStars[i].magnitude;
      names.push_back(vStars[i].names);
     }
  }
  if(names.size() == 0) return -1;
  else return sum / names.size();
}
