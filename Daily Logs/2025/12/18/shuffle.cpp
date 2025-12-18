#include <iostream>
#include <vector>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0 ms */
/* Memory: 13.34 MB */

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> array(2 * n);
        
        for (int i = 0; i < n; i++) {
            array[2 * i] = nums[i];
            array[2 * i + 1] = nums[i + n];
        }
        
        return array;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    // Example test case
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;
    
    vector<int> result = sol.shuffle(nums, n);
    
    // Print output
    for (int x : result) {
        cout << x << " ";
    }
    // Expected output: 2 3 5 4 1 7
    
    return 0;
}