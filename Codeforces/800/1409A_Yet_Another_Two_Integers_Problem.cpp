/*
Problem: 1409A - Yet Another Two Integers Problem
Platform: Codeforces
Difficulty: 800

Approach:
- Find the absolute difference between a and b.
- In one move, we can change the number by at most 10.
- Therefore, the minimum number of moves is:
      ceil(|a - b| / 10)
- We can calculate this using:
      (difference + 9) / 10

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);

        long long diff = abs(a - b);

        printf("%lld\n", (diff + 9) / 10);
    }

    return 0;
}
