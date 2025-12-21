    #include <bits/stdc++.h>
     
    typedef long long ll;
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
     
        vector<int> array(n);
     
        for (int i = 0; i < n; i++) {
            cin >> array[i]; 
        }
     
        sort(array.begin(), array.end());
     
        cout << array[(n-1)/2] << endl;
     
     
        return 0;
    }