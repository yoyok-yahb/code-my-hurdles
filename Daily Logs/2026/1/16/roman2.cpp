#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 10.10MB (77.06%) */

class Solution {
public:
    int roman(char c) {
        switch(c) {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {

        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if ((i < s.length() - 1) && roman(s[i]) < roman(s[i+1])) {
                result -= roman(s[i]);
            } else {
                result += roman(s[i]);
            }
        }

        return result;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    string s = "MCMXCIV";
    int result = sol.romanToInt(s);
    
    cout << "Roman: " << s << endl;
    cout << "Integer: " << result << endl;

    return 0;
}