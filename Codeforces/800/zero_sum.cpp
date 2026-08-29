#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ones = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 1) {
                ones++;
            }
        }

        if (ones >= n / 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
