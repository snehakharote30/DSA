/*
    Problem: 230B - T-primes
    Platform: Codeforces
    Difficulty: 1300

    Approach:
    - A T-prime is the square of a prime number.
    - Precompute all primes up to 1e6 using the Sieve of Eratosthenes.
    - For each number:
        * Compute its integer square root.
        * Check if it is a perfect square.
        * Check whether the square root is prime.

    Time Complexity:
        Sieve: O(1e6 log log 1e6)
        Each Query: O(1)

    Space Complexity:
        O(1e6)
*/

#include <bits/stdc++.h>
using namespace std;

const int LIMIT = 1000001;
vector<bool> isComposite(LIMIT, false);

void sieve() {
    isComposite[0] = isComposite[1] = true;

    for (long long i = 2; i < LIMIT; i++) {
        if (!isComposite[i]) {
            for (long long j = i * i; j < LIMIT; j += i)
                isComposite[j] = true;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int n;
    cin >> n;

    while (n--) {
        long long x;
        cin >> x;

        long long s = sqrtl((long double)x);

        while (s * s > x) s--;
        while ((s + 1) * (s + 1) <= x) s++;

        if (s * s == x && s < LIMIT && !isComposite[s])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
