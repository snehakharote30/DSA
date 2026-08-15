/*
Problem: B - Blank Space
Platform: Codeforces
Difficulty: 800

Approach:
- Keep track of the current consecutive number of zeros.
- Whenever we encounter 0, increase the current count.
- Whenever we encounter 1, reset the current count to 0.
- Keep updating the maximum length of consecutive zeros.

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

        int current = 0;
        int maximum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);

            if (x == 0) {
                current++;
                maximum = max(maximum, current);
            } else {
                current = 0;
            }
        }

        printf("%d\n", maximum);
    }

    return 0;
}
