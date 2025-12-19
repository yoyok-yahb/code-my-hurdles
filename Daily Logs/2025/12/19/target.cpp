#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0 ms (100%) */
/* Memory: 11.38 MB (65.01%) */

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target;

        for (int i = 0; i < n; i++) {
            target.insert(target.begin() + index[i], nums[i]);
        }
        
        return target;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> index = {0, 1, 2, 2, 1};

    vector<int> result = sol.createTargetArray(nums, index);

    for (int x : result) {
        cout << x << " ";
    }
    // Result: 0 4 1 3 2

    return 0;
}