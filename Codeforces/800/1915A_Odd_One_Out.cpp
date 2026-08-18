/*
Problem: 1915A - Odd One Out
Platform: Codeforces
Difficulty: 800

Approach:
- Read the three digits a, b, and c.
- Two digits are equal and one digit is different.
- If a == b, then c is the odd one.
- If a == c, then b is the odd one.
- Otherwise, a is the odd one.

Time Complexity: O(1) per test case
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

        if (a == b)
            printf("%d\n", c);
        else if (a == c)
            printf("%d\n", b);
        else
            printf("%d\n", a);
    }

    return 0;
}
