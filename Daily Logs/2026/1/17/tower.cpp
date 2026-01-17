#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 7ms */
/* Memory: 275MB */

class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int maxX = -1, maxY = -1, max_quality = -1;
        for (int i = 0; i < towers.size(); i++) {
            int dist = abs(towers[i][0] - center[0]) + abs(towers[i][1] - center[1]);
            if (dist <= radius) {
                if (towers[i][2] > max_quality) {
                    max_quality = towers[i][2];
                    maxX = towers[i][0];
                    maxY = towers[i][1];
                } else if (towers[i][2] == max_quality) {
                    if (towers[i][0] < maxX || (towers[i][0] == maxX && towers[i][1] < maxY)) {
                        maxX = towers[i][0];
                        maxY = towers[i][1];
                    }
                }
            }
        }

        return {maxX, maxY};
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    vector<vector<int>> towers = {{1, 2, 5}, {2, 1, 7}, {3, 1, 9}};
    vector<int> center = {2, 1};
    int radius = 1;
    
    vector<int> result = sol.bestTower(towers, center, radius);
    
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}