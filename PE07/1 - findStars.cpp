#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Star {
	double x, y, magnitude;
	int dipper;
	string names;
};

// helper function
Star addStar(double x, double y, double mag, int dip, string name) {
	Star s;
	s.x = x; s.y = y; s.magnitude = mag;
	s.dipper = dip; s.names = name;
	return s;
}

vector<int> findStars(const vector<Star> &v, const string &name) {
	vector<int> result;
	for(int i=0 ; i<v.size() ; i++) {
    	if (v[i].names.find(name) != string::npos) {
    		result.push_back(v[i].dipper);
		}
	}
	return result;
}
