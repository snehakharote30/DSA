/*
    Problem: 1475A - Odd Divisor
    Platform: Codeforces
    Difficulty: 900

    Approach:
    - Remove all factors of 2 from n.
    - If the remaining number is greater than 1,
      then n has an odd divisor greater than 1.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        while (n % 2 == 0)
            n /= 2;

        printf(n > 1 ? "YES\n" : "NO\n");
    }

    return 0;
}
