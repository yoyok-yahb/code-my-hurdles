#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    ll n;
    cin >> n;
    
    ll pos = 1;
    while (pos * 2 <= n) {
        pos *= 2;
    }

    cout << pos << endl;

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