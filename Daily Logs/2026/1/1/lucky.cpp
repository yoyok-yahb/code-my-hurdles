#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0 ms */
/* Memory: 14.2 MB */

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> count;
        for (int x : arr) {
            count[x]++;
        }

        int lucky = -1;
        for (auto const& [x, freq] : count) {
            if (x == freq) {
                if (x > lucky) {
                    lucky = x;
                }
            }
        }

        return lucky;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    // Test Case 1
    vector<int> arr1 = {2, 2, 3, 4};
    cout << "Input: {2, 2, 3, 4} | Output: " << sol.findLucky(arr1) << endl;

    // Test Case 2
    vector<int> arr2 = {1, 2, 2, 3, 3, 3};
    cout << "Input: {1, 2, 2, 3, 3, 3} | Output: " << sol.findLucky(arr2) << endl;

    // Test Case 3
    vector<int> arr3 = {2, 2, 2, 3, 3};
    cout << "Input: {2, 2, 2, 3, 3} | Output: " << sol.findLucky(arr3) << endl;

    return 0;
}