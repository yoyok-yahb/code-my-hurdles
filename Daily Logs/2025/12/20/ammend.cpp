    #include <bits/stdc++.h>
     
    typedef long long ll;
    using namespace std;
     
    void solve() {
     
        int n;
        cin >> n;
     
        string text;
        cin >> text;
     
        int left = 0, right = n-1;
     
        while(left < right) {
            if (text[left] != text[right]) {
                left++;
                right--;
            } else {
                break;
            }
        }
     
        cout << (right-left)+1 << endl;
     
    }
     
    int main() {
        int t;
        cin >> t;
        while (t--) solve();
        return 0;
    }