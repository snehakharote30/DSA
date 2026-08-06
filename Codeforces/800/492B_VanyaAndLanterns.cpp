/*
    Problem: 492B - Vanya and Lanterns
    Platform: Codeforces
    Difficulty: 1200

    Approach:
    - Sort the lantern positions.
    - Compute:
      1. Distance from 0 to the first lantern.
      2. Distance from the last lantern to l.
      3. Half of the maximum gap between consecutive lanterns.
    - The answer is the maximum of these values.

    Time Complexity: O(n log n)
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;
    scanf("%d %lld", &n, &l);

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    sort(a.begin(), a.end());

    double d = max((double)a[0], (double)(l - a[n - 1]));

    for (int i = 1; i < n; i++) {
        double gap = (double)(a[i] - a[i - 1]) / 2.0;
        d = max(d, gap);
    }

    printf("%.10f\n", d);

    return 0;
}
