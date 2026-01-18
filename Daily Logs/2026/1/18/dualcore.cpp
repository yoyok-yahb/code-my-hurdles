#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;

    int count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == 2) count2++;
        else if (num == 3) count3++;
    }

    if (count2 >= 2) cout << "Alice\n";
    else cout << "Bob\n";

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