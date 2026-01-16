#include <iostream>
#include <string>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: 0ms (100%) */
/* Memory: 8.76MB (90.78%) */

class Solution {
public:
    int lengthOfLastWord(string s) {
        int start = s.length() - 1;
        while(s[start] == ' ') start--;

        int count = 0;
        while(s[start] != ' ') {
            count++;
            if (start == 0) break;
            start--;
        }

        return count;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    string s1 = "Hello World";
    string s2 = "   fly me   to   the moon  ";
    string s3 = "luffy is still joyboy";

    cout << "Test 1: " << sol.lengthOfLastWord(s1) << endl;
    cout << "Test 2: " << sol.lengthOfLastWord(s2) << endl;
    cout << "Test 3: " << sol.lengthOfLastWord(s3) << endl;

    return 0;
}