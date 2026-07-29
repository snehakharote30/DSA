/*
    Problem: 158B - Taxi
    Platform: Codeforces
    Difficulty: 1100

    Approach:
    - Count groups of sizes 1, 2, 3, and 4.
    - Greedily combine:
      1. All 4s occupy one taxi each.
      2. Pair each 3 with one 1.
      3. Pair 2s together.
      4. If one 2 remains, pair it with up to two 1s.
      5. Remaining 1s occupy taxis, four per taxi.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int cnt[5] = {0};

    for (int i = 0; i < n; i++) {
        int s;
        scanf("%d", &s);
        cnt[s]++;
    }

    long long cars = 0;

    cars += cnt[4];

    cars += cnt[3];
    int ones = cnt[1];
    ones -= min(ones, cnt[3]);

    cars += cnt[2] / 2;

    if (cnt[2] % 2) {
        cars++;
        ones -= min(ones, 2);
    }

    cars += (ones + 3) / 4;

    printf("%lld\n", cars);
    return 0;
}
