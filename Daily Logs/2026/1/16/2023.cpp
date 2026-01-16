#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n, a;
    cin >> n >> a;

    vector<int> seq(n);
    ll pdt = 1;
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
        pdt *= seq[i];
    }

    if (2023 % pdt != 0) cout << "NO\n";
    else {
        cout << "YES\n" << 2023/pdt << " ";
        for (int i = 0; i < a-1; i++) cout << 1 << " ";
        cout << "\n";
    }

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