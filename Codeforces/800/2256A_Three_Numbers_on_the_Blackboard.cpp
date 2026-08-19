/*
Problem: 2256A - Three Numbers on the Blackboard
Platform: Codeforces
Difficulty: 500

Approach:
- Sort the three numbers as a <= b <= c.
- Initially, the range is c - a.
- The only useful operation is to replace the largest number c
  with a + b.
- The new numbers become a, b, a + b.
- Their range is b.
- Therefore, the minimum possible range is:
      min(c - a, b)

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        if (a > b) swap(a, b);
        if (b > c) swap(b, c);
        if (a > b) swap(a, b);

        long long initialRange = c - a;
        long long newRange = b;

        printf("%lld\n", min(initialRange, newRange));
    }

    return 0;
}
