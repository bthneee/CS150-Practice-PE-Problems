#include <iostream>

using namespace std;

void datingRange(int age, int& min, int& max)
{
  min = (age / 2) + 7;
  max = (age - 7) * 2;
//  return min, max;
}

int main()
{
  int min, max;
  datingRange(48, min, max);
  cout << "Min: " << min << "\nMax: " << max << endl;
}
