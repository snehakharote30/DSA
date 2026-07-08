/*
    Problem: 266A - Stones on the Table
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Traverse the string from left to right.
    - Compare each stone with the previous one.
    - If two adjacent stones have the same color, one must be removed.
    - Count such occurrences.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int removals = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            removals++;
        }
    }

    cout << removals;

    return 0;
}
