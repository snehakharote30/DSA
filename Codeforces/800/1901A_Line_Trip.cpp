/*
Problem: 1901A - Line Trip
Platform: Codeforces
Difficulty: 800

Approach:
- The car starts at position 0 and must travel to x and then return.
- For every pair of consecutive gas stations, the tank must cover
  the distance between them.
- For the final station an, there is no gas station at x.
  Therefore, after refueling at an, the car must travel from an to x
  and back to an, requiring 2 * (x - an) liters.
- The required tank capacity is the maximum of:
    1. Distance from 0 to the first station.
    2. Distance between consecutive stations.
    3. 2 * (x - last station).

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int answer = a[0];

        // Maximum distance between consecutive gas stations
        for (int i = 1; i < n; i++) {
            answer = max(answer, a[i] - a[i - 1]);
        }

        // Last station to x and back
        answer = max(answer, 2 * (x - a[n - 1]));

        printf("%d\n", answer);
    }

    return 0;
}
