#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0 ms (100%)*/
/* Memory: 13.09 MB (99.88%) */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;

        for (int x : nums) {
            ones = (~twos) & (x ^ ones);
            twos = (~ones) & (x ^ twos);
        }

        return ones;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 3, 2};
    
    // The triplets of 2 will cancel out, leaving 3
    cout << "Single Number: " << sol.singleNumber(nums) << endl;

    return 0;
}