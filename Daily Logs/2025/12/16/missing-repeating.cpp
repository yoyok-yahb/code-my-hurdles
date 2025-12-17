#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

/* MY GFG SUBMISSION */
/* Marks: 2 */

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        long long expectedSum = (long long)n * (n+1) / 2;
        long long actualSum = arr[0];
        
        long long repeat, missing;
        
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i-1]) {
                repeat = arr[i];
            }
            actualSum += arr[i];
        }
        
        missing = expectedSum - (actualSum - repeat);
        
        vector<int> arrRet = {(int)repeat, (int)missing};
        return arrRet;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    // Test case: 1 is missing, 3 is repeating
    vector<int> arr = {1, 3, 3}; 
    
    vector<int> result = sol.findTwoElement(arr);
    
    cout << "Repeating: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;

    return 0;
}