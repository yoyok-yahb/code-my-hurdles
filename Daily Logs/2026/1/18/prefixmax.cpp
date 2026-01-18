#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    ll n;
    cin >> n;

    ll max = 0;
    for (int i = 0; i < n; i++) {
        ll num;
        cin >> num;

        if (num >= max) max = num;
    }

    cout << max * n << endl;

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