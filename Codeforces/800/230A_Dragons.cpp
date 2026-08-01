/*
    Problem: 230A - Dragons
    Platform: Codeforces
    Difficulty: 1000

    Approach:
    - Store dragons as (strength, bonus) pairs.
    - Sort them by strength.
    - Fight dragons from weakest to strongest.
    - If Kirito's strength is greater than the dragon's,
      defeat it and gain the bonus.
    - Otherwise, print NO.

    Time Complexity: O(n log n)
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s;
    int n;
    scanf("%lld %d", &s, &n);

    pair<long long, long long> dragons[1000];

    for (int i = 0; i < n; i++)
        scanf("%lld %lld", &dragons[i].first, &dragons[i].second);

    sort(dragons, dragons + n);

    bool possible = true;

    for (int i = 0; i < n; i++) {
        if (s > dragons[i].first)
            s += dragons[i].second;
        else {
            possible = false;
            break;
        }
    }

    printf(possible ? "YES\n" : "NO\n");

    return 0;
}
