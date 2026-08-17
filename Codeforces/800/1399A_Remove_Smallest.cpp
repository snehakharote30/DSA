/*
Problem: 1399A - Remove Smallest
Platform: Codeforces
Difficulty: 800

Approach:
- Sort the array.
- After sorting, if the difference between the largest and
  smallest elements is at most 1, all elements can be reduced
  to one element.
- Otherwise, it is impossible.

Time Complexity: O(n log n) per test case
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[50];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        sort(a, a + n);

        bool possible = true;

        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                possible = false;
                break;
            }
        }

        printf(possible ? "YES\n" : "NO\n");
    }

    return 0;
}
