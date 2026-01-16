#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<ll> a(n), b(n);
    set<ll> setA, setB;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        setA.insert(a[i]);
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
        setB.insert(b[i]);
    }

    if (setA.size() + setB.size() >= 4) cout << "YES\n";
    else cout << "NO\n";
    
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