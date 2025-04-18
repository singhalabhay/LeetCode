#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    // sort(nums.begin(),nums.end()); //easy way solution but don't use it
    // count method
    int zero, ones, two;
    zero = ones = two = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 0)
      {
        zero++;
      }
      else if (nums[i] == 1)
      {
        ones++;
      }
      if (nums[i] == 2)
      {
        two++;
      }
    }
    int i = 0;
    while (zero--)
    {
      nums[i] = 0;
      i++;
    }

    while (ones--)
    {
      nums[i] = 1;
      i++;
    }

    while (two--)
    {
      nums[i] = 2;
      i++;
    }
  }
};