#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 3ms */
/* Memory: 128.2MB */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int indexPos = 0, indexNeg = 1;

        for (auto x : nums) {
            if (x >= 0) {
                result[indexPos] = x;
                indexPos += 2;
            } else {
                result[indexNeg] = x;
                indexNeg += 2;
            }
        }

        return result;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    
    vector<int> result = sol.rearrangeArray(nums);
    
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}