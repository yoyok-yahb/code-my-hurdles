#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n, m, h;
    cin >> n >> m >> h;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> arrOg = arr;

    vector<int> changed;
    vector<bool> is_changed(n, false);

    for (int i = 0; i < m; i++) {
        int b, c;
        cin >> b >> c;

        int idx = b-1;
        arr[idx] += c;

        if (!is_changed[idx]) {
            is_changed[idx] = true;
            changed.push_back(idx);
        }

        if (arr[b-1] > h) {
            for (int x : changed) {
                arr[x] = arrOg[x];
                is_changed[x] = false;
            }
            changed.clear();
        }
    }


    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i == n-1 ? "" : " ");
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