#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 50.1MB (67.72%) */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) count++;
            else count = 0;

            if (count > maxCount) maxCount = count;
        }

        return maxCount;
    }
};

/* MY LEETCODE SUBMISSION ENDS */

int main() {
    Solution sol;
    
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    
    int result = sol.findMaxConsecutiveOnes(nums);
    
    cout << result << endl;

    return 0;
}