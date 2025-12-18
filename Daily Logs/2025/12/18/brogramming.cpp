/* Runtime: 31ms */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 0, check = 1;
        for (int i = 0; i < n; i++) {
            if (s[i] - '0' == check) {
                count++;
                check = !check;
            }
        }

        cout << count << endl;
    }

    return 0;
}