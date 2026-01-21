#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    for (char c : s) if (c == '1') count++;

    if (count % 2 != 0) cout << "NO\n";
    else {
        if (count != 2) cout << "YES\n";
        else {
            int first = -1, second = -1;
            for (int i = 0; i < n; i++) {
                if (s[i] == '1') {
                    if (first == -1) first = i;
                    else second = i;
                }
            }
            if (second - first == 1) cout << "NO\n";
            else cout << "YES\n";
        }
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