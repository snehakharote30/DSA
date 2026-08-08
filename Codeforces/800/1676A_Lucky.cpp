/*
    Problem: 1676A - Lucky?
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the ticket as a string to preserve leading zeros.
    - Calculate the sum of the first 3 digits.
    - Calculate the sum of the last 3 digits.
    - Compare the two sums.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[8];
        scanf("%s", s);

        int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');

        printf(sum1 == sum2 ? "YES\n" : "NO\n");
    }

    return 0;
}
