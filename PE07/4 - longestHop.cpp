#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

vector<Stars> longestHop(const Vector<Stars> &vStars)
{
  vector<Stars> s;
  double longest = 0;
  //put the first and second star to begin with
  s.push_back(vStars[0]);
  s.push_back(vStars[1]);
  for(int i = 2; i < vStars.size(); i++)
  {
    double x1 = vStars[i-1].x;
    double y1 = vStars[i-1].y;
    double x2 = vStars[i].x;
    double y2 = vStars[i].y;
    double dx = x2 - x1, dy = y2 - y1;
    double d = sqrt(dx * dx + dy * dy);
    if(d > longest)
    {
      s[0] = vStars[i - 1];
      s[1] = vStars[i];
      longest = d;
    }
  }
  return s;
}
