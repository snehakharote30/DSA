/*
    Problem: 546A - Soldier and Bananas
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Calculate the total cost of buying w bananas.
    - The cost follows the series:
      k + 2k + 3k + ... + wk
    - Use the sum of first w natural numbers:
      total = k * w * (w + 1) / 2
    - If the total cost exceeds the money the soldier has,
      output the difference; otherwise, output 0.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;

    long long totalCost = k * w * (w + 1) / 2;
    long long borrow = totalCost - n;

    if (borrow < 0) {
        borrow = 0;
    }

    cout << borrow;

    return 0;
}
