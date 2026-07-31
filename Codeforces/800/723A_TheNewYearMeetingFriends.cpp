/*
    Problem: 723A - The New Year: Meeting Friends
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - The optimal meeting point is the median of the three positions.
    - The minimum total distance equals:
        max(x1, x2, x3) - min(x1, x2, x3)

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    int mx = max({x1, x2, x3});
    int mn = min({x1, x2, x3});

    printf("%d\n", mx - mn);

    return 0;
}
