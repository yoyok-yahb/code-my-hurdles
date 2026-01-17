#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 108ms */
/* Memory: 275.5MB */

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        unordered_set<int> unique;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != target[i]) unique.insert(nums[i]);
        }
        return unique.size();
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    vector<int> nums = {1, 2, 3, 4};
    vector<int> target = {1, 5, 3, 6};
    
    int result = sol.minOperations(nums, target);
    
    cout << result << endl;

    return 0;
}