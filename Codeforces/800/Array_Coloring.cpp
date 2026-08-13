/*
Problem: Array Coloring
Platform: Codeforces
Difficulty: 800

Approach:
- We need to divide the array into two non-empty colors.
- The sums of the two colors must have the same parity.
- Since:
      sum1 + sum2 = totalSum
- If both sums have the same parity, their total must be even.
- Therefore, the total sum of the array must be even.
- If totalSum is even, we can always split the elements into two
  non-empty groups with sums having the same parity.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            sum += x;
        }

        printf(sum % 2 == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}
