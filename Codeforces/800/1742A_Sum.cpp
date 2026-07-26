/*
    Problem: 1742A - Sum
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Check all three possible sums:
        1. a + b == c
        2. a + c == b
        3. b + c == a
    - If any condition is true, print "YES", otherwise print "NO".

    Time Complexity: O(1) per test case
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || b + c == a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
