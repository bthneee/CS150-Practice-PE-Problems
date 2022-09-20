#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int packChoco(int goal, int large, int small);

int main()
{
    int goal;
    int large;
    int small;
    
    cout<<"Enter small bar: ";
    cin>>small;
    cout<<"Enter large bar: ";
    cin>>large;
    cout<<"Enter the goal: ";
    cin>>goal;    
    
    int result = packChoco(goal, large, small); 
    
    cout << "Output: " << result << endl; 
    
    return 0;
    
}

/* We want to pack up a box of custom chocolate bars. 
 * We have some small chocolates (1 gram each) and some large chocolates (5 grams each). 
 * Each box will have a goal. Print the number of small bars to use, 
 * assuming we always use big bars before small bars. 
 * Print -1 if it can't be done. 
 */

int packChoco(int goal, int large, int small)
{
    int result = 0; 
   // ---- YOUR CODE GOES ONLY BELOW THIS LINE
    
    int max = goal % 5;
    if (small + (large * 5) < goal)
    {
      // can't fit
      result =  -1;
    }
    else if (max <= small && (goal - large * 5) > 4)
    {
      result = max + 5;
    }
    else if (max <= small)
    {
      result = max;
    }
    else
    {
      result = -1;
    }
    return result;
}
