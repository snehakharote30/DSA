/*
Problem: 1624A - Plus One on the Subset
Platform: Codeforces
Difficulty: 800

Approach:
- In one operation, we can increase any number of selected
  elements by exactly 1.
- The smallest element must eventually reach the largest element.
- Therefore, the minimum number of operations is simply:
      max_element - min_element

Time Complexity: O(n) per test case
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

        long long mn = LLONG_MAX;
        long long mx = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            long long x;
            scanf("%lld", &x);

            mn = min(mn, x);
            mx = max(mx, x);
        }

        printf("%lld\n", mx - mn);
    }

    return 0;
}
