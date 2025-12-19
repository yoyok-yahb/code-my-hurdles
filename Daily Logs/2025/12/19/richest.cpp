#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0 ms */
/* Memory: 11.34 MB */

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int max_wealth = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            int m = accounts[i].size();
            for (int j = 0; j < m; j++) {
                sum += accounts[i][j];
            }
            if (sum > max_wealth) max_wealth = sum;
        }
        return max_wealth;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;

    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};

    int result = sol.maximumWealth(accounts);

    cout << result << endl;

    return 0;
}