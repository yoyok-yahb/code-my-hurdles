#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

/* MY LEETCODE CONTEST SUBMISSION */
/* Runtime: 57ms */
/* Memory: 186.24MB */

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> seen;
        int index_dup = -1;

        for (int i = n-1; i >= 0; i--) {
            if (seen.find(nums[i]) == seen.end()) {
                seen.insert(nums[i]);
            } else {
                index_dup = i;
                break;
            }
        }

        if (index_dup == -1) return 0;
        else return (index_dup / 3) + 1;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    vector<int> nums = {1, 2, 3, 3, 1, 2};
    
    int result = sol.minOperations(nums);
    
    cout << result << endl;

    return 0;
}