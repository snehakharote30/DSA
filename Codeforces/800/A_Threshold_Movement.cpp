#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // n must be even
        if (n % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        long long maxEven = 0;
        long long minOdd = 1e18;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                // 1-based odd index
                minOdd = min(minOdd, a[i]);
            } else {
                // 1-based even index
                maxEven = max(maxEven, a[i]);
            }
        }

        if (maxEven < minOdd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
