/*
Problem: 1805A - Plus or Minus
Platform: Codeforces
Difficulty: 800

Approach:
- We are given a, b, and c.
- Exactly one of the following equations is true:
    a + b = c
    a - b = c
- If a + b == c, print '+'.
- Otherwise, print '-'.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        printf(a + b == c ? "+\n" : "-\n");
    }

    return 0;
}
