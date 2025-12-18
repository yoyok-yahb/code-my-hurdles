#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 23.93MB (19.72%) */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[k] = nums[i];
                k++;
            }
        }

        for (int i = k; i < n; i++) {
            nums[i] = 0;
        }
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;

    vector<int> nums = {0, 1, 0, 3, 12};

    sol.moveZeroes(nums);

    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i < nums.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}