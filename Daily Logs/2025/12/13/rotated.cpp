#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 11.18MB (75.09%) */

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n-1; i++) {
            if (nums[i] > nums[i+1]) count++;
        }

        if (nums[n-1] > nums[0]) count++;

        if (count > 1) cout << "false";
        else cout << "true";
        
        return count <= 1;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;

    // Test Case 1: Sorted and rotated
    vector<int> nums1 = {3, 4, 5, 1, 2};
    cout << "Test 1: ";
    sol.check(nums1);
    cout << endl;

    // Test Case 2: Not sorted and rotated
    vector<int> nums2 = {2, 1, 3, 4};
    cout << "Test 2: ";
    sol.check(nums2);
    cout << endl;

    // Test Case 3: Already sorted
    vector<int> nums3 = {1, 2, 3};
    cout << "Test 3: ";
    sol.check(nums3);
    cout << endl;

    return 0;
}