#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <cmath>    // already included for you
using namespace std;

// The structure (don't change this)
struct Star {
    double x, y;
    double magnitude;
    int draperNumber;
    string names;
};
/**
 *  Write the procedure starsInSector
 *  @param[in] v a vector<Star> to process
 *  @param[out] result a vector<string> to fill with the star names
 *  @param[in] x upper x bounds (inclusive)
 *  @param[in] y upper y bounds (inclusive)
 */
void starsInSector(const vector<Star>& vStars, vector<string>& names, double x, double y){
	//looping through each index in vStars. note that the index variable is of the type
	//size_t or unsigned int. if you use signed int (normal int), it will cause warnings which 
	//you were having.
	for(size_t i=0;i<vStars.size();i++){
		//fetching char at index i
		Star s=vStars[i];
		//checking if x and y are in 1st quadrant (top right)
		if(x>=0 && y>=0){
			//checking if stars coordinates are within origin and (x,y)
			if(s.x>=0 && s.x<=x && s.y>=0 && s.y<=y){
				//adding star's name to names vector
				names.push_back(s.names);
			}
		}
		//checking if x and y are in 2nd quadrant (top left)
		else if(x<=0 && y>=0){
			// x <= s.x <= 0 and 0 <= s.y <= y
			if(s.x>=x && s.x<=0 && s.y>=0 && s.y<=y){
				names.push_back(s.names);
			}
		}
		//checking if x and y are in 3rd quadrant (bottom left)
		else if(x<=0 && y<=0){
			// x <= s.x <= 0 and y <= s.y <= 0
			if(s.x>=x && s.x<=0 && s.y>=y && s.y<=0){
				names.push_back(s.names);
			}
		}
		//checking if x and y are in 4th quadrant (bottom right)
		else if(x>=0 && y<=0){
			// 0 <= s.x <= x and y <= s.y <= 0
			if(s.x>=0 && s.x<=x && s.y>=y && s.y<=0){
				names.push_back(s.names);
			}
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
