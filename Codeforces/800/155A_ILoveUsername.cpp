/*
    Problem: 155A - I_love_%username%
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - The first score initializes both the maximum and minimum.
    - Traverse the remaining scores.
    - Count every time a new maximum or minimum is achieved.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int mx = a[0], mn = a[0];
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > mx) {
            count++;
            mx = a[i];
        }
        else if (a[i] < mn) {
            count++;
            mn = a[i];
        }
    }

    printf("%d\n", count);

    return 0;
}
