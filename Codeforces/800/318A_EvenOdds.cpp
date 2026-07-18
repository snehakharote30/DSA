/*
    Problem: 318A - Even Odds
    Platform: Codeforces
    Difficulty: 900

    Approach:
    - Count the total odd numbers from 1 to n.
    - If k lies within the odd numbers, the answer is the k-th odd number.
    - Otherwise, find the corresponding even number.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long oddCount = (n + 1) / 2;

    if (k <= oddCount) {
        cout << 2 * k - 1;
    } else {
        cout << 2 * (k - oddCount);
    }

    return 0;
}
