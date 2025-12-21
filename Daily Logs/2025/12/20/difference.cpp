#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0 ms (100%) */
/* Memory: 11.83 MB (65.74%) */

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int minVal = nums[0];
        int maxDiff = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] < minVal) minVal = nums[i];
            else if ((nums[i] - minVal) > maxDiff) {
                maxDiff = nums[i] - minVal;
            }
        }
        if (maxDiff == 0) maxDiff = -1;

        return maxDiff;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;

    vector<int> nums = {7, 1, 5, 4};
    int result = sol.maximumDifference(nums);

    cout << result << endl;

    return 0;
}