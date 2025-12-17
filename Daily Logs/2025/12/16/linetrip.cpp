#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int maxDist = a[0];

        for (int i = 1; i < n; i++) {
            if ((a[i] - a[i-1]) > maxDist) maxDist = a[i] - a[i-1];
        }
        if (2*(x - a[n-1]) > maxDist) maxDist = 2 * (x - a[n-1]);

        cout << maxDist << endl;

    }

    return 0;
}