#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll> episodes(n);
    for (int i = 0; i < n; i++) cin >> episodes[i];

    ll expectedSum = n * (n+1) / 2;
    ll actualSum = 0;

    for (ll x : episodes) {
        actualSum += x;
    }

    cout << expectedSum - actualSum << endl;

    return 0;
}