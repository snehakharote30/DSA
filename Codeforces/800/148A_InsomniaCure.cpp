/*
    Problem: 148A - Insomnia cure
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Iterate through dragons numbered 1 to d.
    - A dragon is damaged if its number is divisible by
      k, l, m, or n.
    - Count all such dragons.

    Time Complexity: O(d)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damaged = 0;

    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            damaged++;
    }

    cout << damaged;

    return 0;
}
