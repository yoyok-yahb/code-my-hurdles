#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 22.70MB (49.06%) */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != nums[k]) {
                k++;
                nums[k] = nums[i];
            }
        }

        return k+1;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;

    // Test case: Sorted array with duplicates
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = sol.removeDuplicates(nums);

    // Print the number of unique elements
    cout << "Number of unique elements: " << k << endl;

    // Print the modified array (first k elements)
    cout << "Modified array: [";
    for (int i = 0; i < k; i++) {
        cout << nums[i];
        if (i < k - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}