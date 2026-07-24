/*
    Problem: 479A - Expression
    Platform: Codeforces
    Difficulty: 800

    Approach:
    Check all possible expressions formed using '+', '*'
    and parentheses, then output the maximum.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = max({
        a + b + c,
        a + b * c,
        a * b + c,
        a * b * c,
        (a + b) * c,
        a * (b + c)
    });

    cout << ans;

    return 0;
}
