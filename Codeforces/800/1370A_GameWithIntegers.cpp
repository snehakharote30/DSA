/*
    Problem: 1370A - Game with Integers
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - If n is divisible by 3, the second player wins.
    - Otherwise, the first player wins.

    Time Complexity: O(t)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        printf(n % 3 == 0 ? "Second\n" : "First\n");
    }

    return 0;
}
