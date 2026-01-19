#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0, flag = 0;

    for (int i = 0; i < n/2; i++) {
        if (flag == 0) {
            if (s[i] != s[n-1 - i]) {
                flag = 1;
                count++;
            }
        } else {
            if (s[i] == s[n-1 - i]) {
                flag = 0;
            }
        }
    }

    if (count <= 1) cout << "Yes\n";
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