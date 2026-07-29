/*
    Problem: 268A - Games
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Store home and guest uniform colors.
    - Compare every team's home color with every other team's guest color.
    - Count all matches.

    Time Complexity: O(n²)
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int h[30], a[30];

    for (int i = 0; i < n; i++)
        scanf("%d %d", &h[i], &a[i]);

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && h[i] == a[j])
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
