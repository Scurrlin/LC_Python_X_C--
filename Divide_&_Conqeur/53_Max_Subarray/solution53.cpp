#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int total = 0;

        for (int n : nums) {
            total += n;
            res = max(res, total);
            if (total < 0) {
                total = 0;
            }
        }
        
        return res;
    }
};

// Time Complexity:
// Space Complexity:

// Runtime1:
// Memory1:

// Runtime2:
// Memory2:

// Runtime3:
// Memory3: