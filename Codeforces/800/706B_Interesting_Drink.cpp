/*
Problem: 706B - Interesting drink
Platform: Codeforces
Difficulty: 1000

Approach:
- Store the prices of all shops in an array.
- Sort the prices in ascending order.
- For each day's available money m, find the number of shop prices
  that are less than or equal to m.
- Use upper_bound() to find the first price greater than m.
- The position returned by upper_bound() gives the required count.

Time Complexity: O(n log n + q log n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    vector<int> x(n);

    for (int i = 0; i < n; i++)
        scanf("%d", &x[i]);

    sort(x.begin(), x.end());

    int q;
    scanf("%d", &q);

    while (q--) {
        long long m;
        scanf("%lld", &m);

        int count = upper_bound(x.begin(), x.end(), m) - x.begin();

        printf("%d\n", count);
    }

    return 0;
}
