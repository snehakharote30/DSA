/*
Problem: 1459A - Halloumi Boxes
Platform: Codeforces
Difficulty: 800

Approach:
- If k >= 2, we can reverse any two adjacent boxes.
- By repeatedly reversing subarrays of length 2, we can rearrange
  the boxes into any required order.
- Therefore, sorting is always possible when k >= 2.
- If k == 1, we cannot change the array at all.
  So the array must already be sorted.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        if (k >= 2) {
            printf("YES\n");
        } else {
            bool sorted = true;

            for (int i = 1; i < n; i++) {
                if (a[i] < a[i - 1]) {
                    sorted = false;
                    break;
                }
            }

            printf(sorted ? "YES\n" : "NO\n");
        }
    }

    return 0;
}
