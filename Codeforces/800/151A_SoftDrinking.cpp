/*
    Problem: 151A - Soft Drinking
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Calculate the maximum number of toasts possible using:
        1. Drink
        2. Lime slices
        3. Salt
    - The limiting resource determines the total number of toasts.
    - Divide equally among all friends.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    long long totalDrink = k * l;
    long long totalLimeSlices = c * d;

    long long toastsByDrink = totalDrink / nl;
    long long toastsByLime = totalLimeSlices;
    long long toastsBySalt = p / np;

    long long maxToastsTotal = min({toastsByDrink, toastsByLime, toastsBySalt});

    cout << maxToastsTotal / n << '\n';

    return 0;
}
