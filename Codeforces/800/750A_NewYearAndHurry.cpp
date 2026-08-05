/*
    Problem: 750A - New Year and Hurry
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Available contest time = 240 - k.
    - Solve problems in increasing order of difficulty.
    - Count how many problems can be solved before time runs out.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int totalMinutes = 240 - k;
    int used = 0, count = 0;

    for (int i = 1; i <= n; i++) {
        used += 5 * i;
        if (used <= totalMinutes)
            count++;
        else
            break;
    }

    printf("%d\n", count);

    return 0;
}
