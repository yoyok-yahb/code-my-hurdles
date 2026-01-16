#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* MY LEETCODE SUBMISSION */
/* Runtime: oms (100%) */
/* Memory: 12.41 (5.38%) */

class Solution {
public:
    string chunkToWords(int num) {
        if (num == 0) return "";

        vector<vector<string>> words = {
            {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"},
            {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"},
            {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"}
        };

        vector<int> digit = {0, 0, 0};
        for (int i = 0; num; i++) {
            digit[i] = num % 10;
            num /= 10;
        }

        string result = "";

        // Hundred
        if (digit[2] > 0) {
            result += words[0][digit[2]] + " Hundred";
            if ((digit[0] > 0 || digit[1] > 0)) result += " ";
        }

        // Tens and Ones
        if (digit[1] == 1) {
            result += words[2][digit[0]];
        } else {
            result += words[1][digit[1]];
            if (digit[1] != 0 && digit[0] != 0) result += " ";
            result += words[0][digit[0]];
        }

        return result;
    }

    string numberToWords(int num) {
        if (num == 0) return "Zero";

        vector<int> chunks;
        while (num) {
            chunks.push_back(num % 1000);
            num /= 1000;
        }

        vector<string> suffixes = {"", " Thousand", " Million", " Billion"};

        string result = "";
        for (int i = chunks.size() - 1; i >= 0; i--) {
            if (chunks[i] > 0) {
                result += (result.empty() ? "" : " ") + chunkToWords(chunks[i]) + suffixes[i];
            }
        }

        while(!result.empty() && result.back() == ' ') result.pop_back();
        return result;
    }
};

/* MY SUBMISSION ENDS */

int main() {
    Solution sol;
    
    int num1 = 1234567;
    int num2 = 1000010;
    
    cout << "Input: " << num1 << "\nOutput: " << sol.numberToWords(num1) << endl;
    cout << "\nInput: " << num2 << "\nOutput: " << sol.numberToWords(num2) << endl;

    return 0;
}