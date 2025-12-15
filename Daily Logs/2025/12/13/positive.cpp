#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {

        int n;
        cin >> n;

        int sum = 0, sneg = 0;

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;

            if (m == 0) sum += 1;
            else if (m == -1) sneg += 1;
        }

        sum += (sneg % 2) * 2;
        cout << sum << endl;

        t--;
    }

    return 0;
}