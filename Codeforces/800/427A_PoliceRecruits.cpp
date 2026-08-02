/*
    Problem: 427A - Police Recruits
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Keep track of available police officers.
    - Recruit officers when a positive number appears.
    - For each crime (-1), assign an officer if available,
      otherwise count it as untreated.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    long long available = 0, untreated = 0;

    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x == -1) {
            if (available > 0)
                available--;
            else
                untreated++;
        } else {
            available += x;
        }
    }

    printf("%lld\n", untreated);

    return 0;
}
