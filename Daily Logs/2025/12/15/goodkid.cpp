#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        a[0]++;

        long long product = 1;
        for (int i = 0; i < n; i++) product *= a[i];

        cout << product << endl;

    }

    return 0;
}