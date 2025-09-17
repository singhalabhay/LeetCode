#include <vector>
using namespace std;
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int candidate = 0, count = 0;
    for (int num : nums)
    {
      if (count == 0)
      {
        candidate = num;
      }
      count += (num == candidate) ? 1 : -1;
    }
    return candidate;
  }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0, ans = nums[0];

//         for (int i = 0; i + 1 < n; i += 2) {   // ✅ fix: i+1 < n
//             if (nums[i] == nums[i + 1]) {
//                 count++;
//                 ans = nums[i];
//             }
//         }

//         return ans;
//     }
// };
