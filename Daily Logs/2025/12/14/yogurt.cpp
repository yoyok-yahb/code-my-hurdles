#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t > 0) {

        int n, a, b, sum;
        cin >> n >> a >> b;

        if (2*a <= b) {
            sum = n * a;
        } else {
            int std = n % 2;
            int prom = n - std;
            sum = std * a + (prom / 2) * b;
        }

        cout << sum << endl;

        t--;
    }

    return 0;
}