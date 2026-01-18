#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << (i == n ? "" : " ");
    }
    cout << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}