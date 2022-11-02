#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

struct Star
{
  double x, y;
  double magnitude;
  int draperNumber;
  string names;
};

vector<Star> closestDistance(vector<Star> vStars)
{
  Star star1;
  Star star2;
  bool firstEntry = true;//representing first pair of stars
  double distance = 0;//distance between closest stars (current)
  //looping through all pair of stars
  for(int i = 1;i < vStars.size(); i++)
  {
    if(firstEntry)
    {
      //first pair, updating the variables
      star1 = vStars[i - 1];
      star2 = vStars[i];
      //finding distance, i am not considering z axis as the Star struct has only
      //x, y axes
      distance = sqrt(pow(star2.x - star1.x, 2) + pow(star2.y - star1.y, 2) );
      firstEntry = false;
    }
    else
    {
      //subsequent pair
      Star tmp1 = vStars[i - 1];
      Star tmp2 = vStars[i];
      //finding the distance between current pair of stars
      double tmpDistance = sqrt(pow(tmp2.x - tmp1.x, 2) + pow(tmp2.y - tmp1.y, 2) );
      //checking if it is smaller than current distance
      if(tmpDistance < distance)
      {
        //updating the variables
        distance = tmpDistance;
        star1 = tmp1;
        star2 = tmp2;
      }
    }
  }
  //defining the vector and pushing the two closest stars pair
  vector<Star> closest;
  closest.push_back(star1);
  closest.push_back(star2);
  return closest;
}
