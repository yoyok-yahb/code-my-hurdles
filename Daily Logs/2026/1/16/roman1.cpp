#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 9.40MB (70.71%) */

class Solution {
public:
    string intToRoman(int num) {
        string keys[4][10] = {
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
            {"", "M", "MM", "MMM", "", "", "", "", "", ""}
        };

        int digit[4] = {0}, i = 0;
        while(num) {
            digit[i] = num % 10;
            num /= 10;
            i++;
        }
        
        string ans = "";
        for (int j = i-1; j >= 0; j--) ans += keys[j][digit[j]];

        return ans;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    int num = 1994;
    string result = sol.intToRoman(num);
    
    cout << "Integer: " << num << endl;
    cout << "Roman: " << result << endl;

    return 0;
}