/*
Problem: 1872A - How Much Does Daytona Cost?
Platform: Codeforces
Difficulty: 800

Approach:
- We need to check whether k can be the most common element
  in some non-empty subsegment.
- A subsegment containing only k is enough.
- Therefore, such a subsegment exists if and only if k
  appears at least once in the array.
- Scan the array and check whether any element is equal to k.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        bool found = false;

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);

            if (x == k)
                found = true;
        }

        printf(found ? "YES\n" : "NO\n");
    }

    return 0;
}
