#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 20.45MB (58.54%) */

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
         // ENCODE
         for (int i = 0; i < n; i++) {
            int new_num = nums[nums[i]] % 1024;
            nums[i] = nums[i] +(new_num * 1024);
         }
         // DECODE
         for (int i = 0; i < n; i++) {
            nums[i] = nums[i] / 1024;
         }
         return nums;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    
    vector<int> result = sol.buildArray(nums);
    
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}