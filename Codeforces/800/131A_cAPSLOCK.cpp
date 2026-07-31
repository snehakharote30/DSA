/*
    Problem: 131A - cAPS LOCK
    Platform: Codeforces
    Difficulty: 1000

    Approach:
    - Check if:
        1. All letters are uppercase, OR
        2. Only the first letter is lowercase and all remaining are uppercase.
    - If either condition is true, toggle the case of every character.
    - Otherwise, print the string unchanged.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    bool allUpper = true;
    for (char c : s) {
        if (!isupper(c)) {
            allUpper = false;
            break;
        }
    }

    bool restUpper = true;
    for (int i = 1; i < n; i++) {
        if (!isupper(s[i])) {
            restUpper = false;
            break;
        }
    }

    bool capsLockCase = (n > 1) && islower(s[0]) && restUpper;

    if (allUpper || capsLockCase) {
        for (char &c : s) {
            if (isupper(c))
                c = tolower(c);
            else
                c = toupper(c);
        }
    }

    cout << s << endl;

    return 0;
}
