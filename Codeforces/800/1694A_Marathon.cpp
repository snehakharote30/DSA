/*
Problem: 1694A - Marathon
Platform: Codeforces
Difficulty: 800

Approach:
- Timur's distance is given by a.
- A participant is in front of Timur if they ran a greater distance than a.
- Check b, c, and d one by one.
- Count how many of them are greater than a.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int count = 0;

        if (b > a) count++;
        if (c > a) count++;
        if (d > a) count++;

        printf("%d\n", count);
    }

    return 0;
}
