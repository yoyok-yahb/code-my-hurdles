#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll result = abs(arr[0] - arr[n-1]) + abs(arr[n-1] - arr[1]) + abs(arr[1] - arr[n-2]) + abs(arr[n-2] - arr[0]);
    cout << result << endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}