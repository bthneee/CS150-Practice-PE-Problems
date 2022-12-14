#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

#include "TimeSpan.h"
using namespace std;

class TimeSpan
{
private:
  int hour;
  int minute;
public:
//Constructors of TimeSpan class
//Default Constructor
TimeSpan()
{
  hour=0;
  minute=0;
}

//Constructor with parameters
TimeSpan(int h,int m)
{
  hour=h;
  minute=m;
  //check if minutes greater than 59
  hour=hour+minute/60;
  minute=minute%60;
}

//Getter and Setter of TimeSpan class
int hours()
{
  return hour;
}

int minutes()
{
  return minute;
}

void set_hours(int h)
{
  hour=h;
}

void set_minutes(int m)
{
  minute=m;
}

//Comparators to Use for sorting of TimeSpan and comparing them.
bool operator <(TimeSpan t)
{
  return (hour<t.hours())||(hour==t.hours() && minute<t.minutes());
}

bool operator >(TimeSpan t)
{
  return (hour>t.hours())||(hour==t.hours() && minute>t.minutes());
}

bool operator ==(TimeSpan t)
{
  return (hour==t.hours())&&(minute==t.minutes());
}

//hourspan and toString functions
float hourspan()
{
  float h=(float)hour;
  float m=(float)minute;
  m=m/60;
  return h+m;
}

string toString()
{
  return to_string(hour)+":"+to_string(minute);
}

//function to define outputstream of class object.

friend ostream& operator<<(ostream& os,TimeSpan t);
};

//Function to cout Timespan class
ostream& operator<<(ostream &os,TimeSpan t)
{
  os<<"{"<<t.hours()<<" , "<<t.minutes()<<"}";
  return os;
}
