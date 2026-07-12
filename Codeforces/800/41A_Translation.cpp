/*
    Problem: 41A - Translation
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the original string and the translated string.
    - Reverse the original string.
    - Compare it with the translated string.
    - If both are equal, print "YES"; otherwise print "NO".

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if (s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
