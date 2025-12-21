#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> chips(n);
    for (int i = 0; i < n; i++) cin >> chips[i];

    int left = -1, right = -1;
    for (int i = 0; i < n; i++) {
        if (chips[i] == 1) {
            left = i;
            break;
        }
    }
    for (int i = n-1; i >= 0; i--) {
        if (chips[i] == 1) {
            right = i;
            break;
        }
    }

    int moves = 0;
    for (int i = left; i <= right; i++) {
        if (chips[i] == 0 && (left != -1 && right != -1))
            moves++;
    }

    cout << moves << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}