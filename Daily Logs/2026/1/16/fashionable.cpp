#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    ll lowEven = -1, lowOdd = -1, highEven = -1, highOdd = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && lowEven == -1) lowEven = i;
        if (arr[i] % 2 != 0 && lowOdd == -1) lowOdd = i;
    }

    for (int i = n-1; i >= 0; i--) {
        if (arr[i] % 2 == 0 && highEven == -1) highEven = i;
        if (arr[i] % 2 != 0 && highOdd == -1) highOdd = i;
    }

    ll ans = n;

    if (lowEven != -1) {
        ll opEven = n - (highEven - lowEven + 1);
        ans = min(ans, opEven);
    }
    if (lowOdd != -1) {
        ll opOdd = n - (highOdd - lowOdd + 1);
        ans = min(ans, opOdd);
    }

    cout << ans << endl;

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