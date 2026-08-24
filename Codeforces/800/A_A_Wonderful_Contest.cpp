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

        // dp[x] = whether score x can be achieved
        vector<bool> dp(100 * n + 1, false);
        dp[0] = true;

        for (int i = 0; i < n; i++) {
            int value = 100 / a[i];

            vector<bool> next = dp;

            // We can get 0, value, 2*value, ..., a[i]*value
            for (int score = 0; score <= 100 * n; score++) {
                if (dp[score]) {
                    for (int j = 1; j <= a[i]; j++) {
                        if (score + j * value <= 100 * n) {
                            next[score + j * value] = true;
                        }
                    }
                }
            }

            dp = next;
        }

        bool possible = true;

        for (int score = 0; score <= 100 * n; score++) {
            if (!dp[score]) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "Yes" : "No") << '\n';
    }

    return 0;
}
