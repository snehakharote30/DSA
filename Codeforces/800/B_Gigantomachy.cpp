#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        long long a, b;

        // We only need the first element
        cin >> a;

        for (int i = 1; i < n; i++) {
            long long x;
            cin >> x;
        }

        cin >> b;

        for (int i = 1; i < m; i++) {
            long long x;
            cin >> x;
        }

        long long bea = a + n - 1;
        long long ver = b + m - 1;

        if (bea >= ver)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}
