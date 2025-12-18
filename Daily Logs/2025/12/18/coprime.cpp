/* Runtime: 31ms */

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        long long a, b;
        cin >> a >> b;
        if (a == 1 && b == 1) {
            cout << 1 << endl;
        } else {
            cout << b - a << endl;
        }

    }
    return 0;
}