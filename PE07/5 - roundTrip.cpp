#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Star {
	double x, y, magnitude;
	int dipper;
	string names;
};

double roundTrip(const Vector<Stars> &vStars)
{
  double sum = 0;
  for(int i = 1; i < vStars.size(); i++)
  {
    double x1 = vStars[i - 1].x;
    double y1 = vStars[i - 1].y;
    double x2 = vStars[i].x;
    double y2 = vStars[i].y;
    double dx = x2 - x1, dy = y2 - y1;
    double d = sqrt(dx * dx + dy * dy);
    sum += d;
  }

  //distance between last and first star
  double x1 = vStars[0].x;
  double y1 = vStars[0].y;
  double x2 = vStars[vStars.size() - 1].x;
  double y2 = vStars[vStars.size() - 1].y;
  double dx = x2 - x1, dy = y2 - y1;
  double d = sqrt(dx * dx + dy * dy);
  sum += d;

  return sum;
}
