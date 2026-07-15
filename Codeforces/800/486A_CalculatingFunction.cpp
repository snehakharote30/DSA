/*
    Problem: 486A - Calculating Function
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Observe the pattern of the function:
        f(n) = -1 + 2 - 3 + 4 - ... + (-1)^n * n
    - If n is even, the result is n / 2.
    - If n is odd, the result is -(n + 1) / 2.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2;
    } else {
        cout << -(n + 1) / 2;
    }

    return 0;
}
