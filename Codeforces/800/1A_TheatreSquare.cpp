/*
    Problem: 1A - Theatre Square
    Platform: Codeforces
    Difficulty: 1000

    Approach:
    - Calculate the number of flagstones needed along the length and width.
    - Use ceiling division:
          ceil(n / a) = (n + a - 1) / a
    - Multiply the required rows and columns to get the minimum number of flagstones.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long rows = (n + a - 1) / a;
    long long cols = (m + a - 1) / a;

    cout << rows * cols;

    return 0;
}
