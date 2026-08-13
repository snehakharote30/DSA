/*
Problem: 189A - Cut Ribbon
Platform: Codeforces
Difficulty: 1200

Approach:
- Use Dynamic Programming.
- dp[i] represents the maximum number of pieces into which
  a ribbon of length i can be cut.
- For every length i, try cutting a piece of length a, b, or c.
- If dp[i - len] is possible, then:
      dp[i] = max(dp[i], dp[i - len] + 1)
- Finally, dp[n] gives the maximum number of pieces.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    int lens[3] = {a, b, c};

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 3; j++) {
            int len = lens[j];

            if (i >= len && dp[i - len] != -1) {
                dp[i] = max(dp[i], dp[i - len] + 1);
            }
        }
    }

    printf("%d\n", dp[n]);

    return 0;
}
