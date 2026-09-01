#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Check for duplicate elements
        set<int> s(a.begin(), a.end());

        if (s.size() != n) {
            cout << -1 << '\n';
            continue;
        }

        // Sort in decreasing order
        sort(a.rbegin(), a.rend());

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}
