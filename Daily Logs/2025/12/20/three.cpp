#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* MY LEETCODE CONTEST SUBMISSION */
/* Runtime: 91ms */
/* Memory: 290.19MB */

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        vector<int> rem0, rem1, rem2;
        long long sum[4] = {-1, -1, -1, -1};
        
        for (int i = 0; i < n; i++) {
            if (nums[i] % 3 == 0) rem0.push_back(nums[i]);
            else if (nums[i] % 3 == 1) rem1.push_back(nums[i]);
            else rem2.push_back(nums[i]);
        }

        if (rem0.size() >= 3) sum[0] = (long long)rem0[0] + rem0[1] + rem0[2];
        if (rem1.size() >= 3) sum[1] = (long long)rem1[0] + rem1[1] + rem1[2];
        if (rem2.size() >= 3) sum[2] = (long long)rem2[0] + rem2[1] + rem2[2];
        if (rem0.size() >= 1 && rem1.size() >= 1 && rem2.size() >= 1) {
            sum[3] = (long long)rem0[0] + rem1[0] + rem2[0];
        }

        long long maxSum = -1;
        for (int i = 0; i < 4; i++) {
            if (sum[i] >= maxSum) {
                maxSum = sum[i];
            }
        }

        if (maxSum == -1) return 0;
        else return (int)maxSum;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    vector<int> nums = {3, 6, 5, 1, 8};
    
    int result = sol.maximumSum(nums);
    
    cout << result << endl;

    return 0;
}