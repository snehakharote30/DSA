/*
    Problem: 1328A - Divisibility Problem
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - For each test case:
      - If a is already divisible by b, answer is 0.
      - Otherwise, answer = b - (a % b).
    - A concise formula:
        (b - a % b) % b

    Time Complexity: O(t)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        cout << (b - a % b) % b << '\n';
    }

    return 0;
}
