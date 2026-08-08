/*
    Problem: 732A - Buy a Shovel
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Try buying 1 to 10 shovels.
    - Check whether n * k ends in 0 or r.
    - The first valid n is the answer.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    scanf("%d %d", &k, &r);

    for (int n = 1; n <= 10; n++) {
        int total = n * k;

        if (total % 10 == 0 || total % 10 == r) {
            printf("%d\n", n);
            return 0;
        }
    }

    return 0;
}
