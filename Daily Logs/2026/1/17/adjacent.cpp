#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int x, y;
    cin >> x >> y;

    if ((x - y + 1) % 9 == 0 && y <= x+1) cout << "Yes\n";
    else cout << "No\n";

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