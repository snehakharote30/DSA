/*
Problem: 1772A - A+B Again?
Platform: Codeforces
Difficulty: 800

Approach:
- The given number is always a two-digit positive integer.
- The tens digit can be obtained using n / 10.
- The units digit can be obtained using n % 10.
- Add both digits and print the result.

Time Complexity: O(1)
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

        printf("%d\n", n / 10 + n % 10);
    }

    return 0;
}
