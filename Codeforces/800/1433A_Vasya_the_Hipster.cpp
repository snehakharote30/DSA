/*
Problem: 1433A - Vasya the Hipster
Platform: Codeforces
Difficulty: 800

Approach:
- Each fashionable day requires one red sock and one blue sock.
- Therefore, the number of days with different-colored socks is:
  min(a, b)
- After those days, only socks of one color remain.
- Two socks of the same color can be worn together.
- Therefore, the number of days with same-colored socks is:
  abs(a - b) / 2

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int diffDays = min(a, b);
    int remaining = abs(a - b);
    int sameDays = remaining / 2;

    printf("%d %d\n", diffDays, sameDays);

    return 0;
}
