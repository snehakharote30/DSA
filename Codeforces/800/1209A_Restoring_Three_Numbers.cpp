/*
Problem: 1209A - Restoring Three Numbers
Platform: Codeforces
Difficulty: 800

Approach:
- Read the four given numbers.
- Sort them in ascending order.
- The largest number is always a + b + c.
- Subtract each of the other three numbers from the largest number.
- The resulting values are a, b, and c.

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x[4];

    for (int i = 0; i < 4; i++)
        scanf("%lld", &x[i]);

    sort(x, x + 4);

    long long sum = x[3];

    long long a = sum - x[0];
    long long b = sum - x[1];
    long long c = sum - x[2];

    printf("%lld %lld %lld\n", a, b, c);

    return 0;
}
