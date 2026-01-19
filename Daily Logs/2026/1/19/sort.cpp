#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 3ms */
/* Memory: 10.78MB */

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> count;
        for (char c : s) count[c]++;

        vector<pair<int, char>> unique;
        for (const auto& [letter, freq] : count) {
            unique.push_back({freq, letter});
        }

        string ans = "";
        sort(unique.begin(), unique.end(), greater<pair<int, char>>());
        for (const auto& [freq, letter] : unique) {
            for (int i = 0; i < freq; i++) {
                ans += letter;
            }
        }

        return ans;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    string s = "tree";
    string result = sol.frequencySort(s);
    
    cout << "Input: " << s << endl;
    cout << "Output: " << result << endl;

    return 0;
}