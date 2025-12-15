#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t>0) {

        int n;
        cin >> n;

        string text;
        cin >> text;

        int count = 0;
        
        char last = text[n-1];
        for (int i = 0; i < n-1; i++) {
            if (text[i] != last) {
                count++;
            }
        }

        cout << count << endl;

        t--;
    }

    return 0;
}