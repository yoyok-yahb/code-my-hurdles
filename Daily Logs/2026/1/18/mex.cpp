#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

void solve() {

    int n;
    cin >> n;
    if (n == 0) cout << 0 << endl;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    int max_streak = 1, current_streak = 1;

    for (int i = 1; i < (int)arr.size(); i++) {
        if (arr[i] == arr[i-1] + 1) current_streak++;
        else current_streak = 1;

        if (current_streak > max_streak) max_streak = current_streak;
    }

    cout << max_streak << endl;

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