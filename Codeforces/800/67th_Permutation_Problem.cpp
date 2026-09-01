#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // First n numbers: 1, 2, ..., n
        // Then median and larger number pairs:
        // (n+1, n+2), (n+3, n+4), ...

        for (int i = 1; i <= n; i++) {
            cout << i << " ";
            cout << n + 2 * i - 1 << " ";
            cout << n + 2 * i << " ";
        }

        cout << "\n";
    }

    return 0;
}
