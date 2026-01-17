#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sum = 0;
    unordered_map<int, int> freq;
    for (int i = 0; i < 5; i++) {
        int val;
        cin >> val;
        freq[val]++;
        sum += val;
    }

    int max_drop = 0;
    for (auto const& [value, frequency] : freq) {
        if (frequency >= 2) {
            int drop = value * min(3, frequency);
            if (drop >= max_drop) max_drop = drop;
        }
    }

    cout << sum - max_drop << endl;

}