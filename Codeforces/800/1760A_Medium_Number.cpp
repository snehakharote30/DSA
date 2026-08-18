/*
Problem: 1760A - Medium Number
Platform: Codeforces
Difficulty: 800

Approach:
- Read the three distinct integers.
- Store them in an array.
- Sort the three numbers.
- After sorting, the middle element is the median.

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a[3];

        for (int i = 0; i < 3; i++)
            scanf("%d", &a[i]);

        sort(a, a + 3);

        printf("%d\n", a[1]);
    }

    return 0;
}
