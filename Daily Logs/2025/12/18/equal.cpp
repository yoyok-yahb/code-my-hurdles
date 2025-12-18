#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Marks: 2 */

class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        int n = a.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) return false;
        }
        return true;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    vector<int> a = {1, 2, 5, 4, 0};
    vector<int> b = {2, 4, 5, 0, 1};

    if (sol.checkEqual(a, b)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}