/*
    Problem: 337A - Puzzles
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Sort the puzzle sizes.
    - Check every consecutive group of n puzzles.
    - Minimize the difference between the largest and smallest puzzle.

    Time Complexity: O(m log m)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int f[50];
    for (int i = 0; i < m; i++)
        scanf("%d", &f[i]);

    sort(f, f + m);

    int best = INT_MAX;
    for (int i = 0; i + n - 1 < m; i++)
        best = min(best, f[i + n - 1] - f[i]);

    printf("%d\n", best);

    return 0;
}
