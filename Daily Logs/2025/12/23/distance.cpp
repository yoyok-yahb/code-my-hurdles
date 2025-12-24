#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/* MY GfG SUBMISSION */
/* Marks: 2 */

class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        
        int n = arr.size();
        unordered_map<int, int> first;
        int maxDist = 0;
        
        for (int i = 0; i < n; i++) {
            if (first.find(arr[i]) == first.end()) {
                first[arr[i]] = i;
            } else {
                int distance = i - first[arr[i]];
                if (distance > maxDist) maxDist = distance;
            }
        }
        
        return maxDist;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    vector<int> arr = {1, 1, 2, 2, 2, 1};
    
    int result = sol.maxDistance(arr);
    
    cout << result << endl;

    return 0;
}