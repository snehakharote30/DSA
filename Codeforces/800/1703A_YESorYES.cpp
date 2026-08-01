/*
    Problem: 1703A - YES or YES?
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Convert each character of the string to uppercase.
    - Check if it equals "YES".
    - Print YES if it matches, otherwise NO.

    Time Complexity: O(t)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    char s[10];

    while (t--) {
        scanf("%s", s);

        bool ok = (toupper(s[0]) == 'Y' &&
                   toupper(s[1]) == 'E' &&
                   toupper(s[2]) == 'S');

        printf(ok ? "YES\n" : "NO\n");
    }

    return 0;
}
