#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0 ms */
/* Memory: 20.55 MB */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int XOR = nums[0];

        for (int i = 1; i < n; i++) {
            XOR ^= nums[i];
        }
        return XOR;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    // Example test case: every element appears twice except for one
    vector<int> nums = {4, 1, 2, 1, 2};
    
    int result = sol.singleNumber(nums);
    
    cout << result << endl;

    return 0;
}