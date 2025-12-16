#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 21.67MB (92.43%) */

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int expectedSum = n * (n+1) / 2;
        int currentSum = 0;

        for (int i = 0; i < n; i++) {
            currentSum += nums[i];
        }

        int missing = expectedSum - currentSum;
        return missing;

    }
};

/* MY LEETCODE SUBMISSION ENDS */

int main() {
    Solution sol;
    
    vector<int> nums = {3, 0, 1};
    
    int result = sol.missingNumber(nums);
    
    cout << result << endl;

    return 0;
}