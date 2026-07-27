/*
    Problem: 1335A - Candies and Two Sisters
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Let Alice get 'a' candies and Betty get 'b' candies.
    - We need:
        a + b = n
        a > b
        a, b > 0
    - The number of valid distributions is simply (n - 1) / 2.

    Time Complexity: O(1) per test case
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        cout << (n - 1) / 2 << "\n";
    }

    return 0;
}
