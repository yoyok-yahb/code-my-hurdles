#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    ll n, m;
    cin >> n >> m;

    if (n == 1 && m == 1) {
        cout << 0 << endl;
        return;
    }

    ll mx = max(n, m), mn = min(n, m);
    if (mn == 1 && mx > 2) {
        cout << -1 << endl;
        return;
    } 

    ll steps = 2 * (mn - 1);
    ll df = mx - mn;

    if (df % 2 == 0) steps += 2 * df;
    else steps += 2 * df - 1;

    cout << steps << endl;

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