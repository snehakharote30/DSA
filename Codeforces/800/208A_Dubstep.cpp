/*
    Problem: 208A - Dubstep
    Platform: Codeforces
    Difficulty: 900

    Approach:
    - Traverse the string.
    - Whenever "WUB" is found, skip it.
    - Print a space only once between consecutive words.
    - Ignore leading and trailing WUBs.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool firstWord = true;

    for (int i = 0; i < (int)s.size();) {
        if (i + 2 < (int)s.size() && s.substr(i, 3) == "WUB") {
            i += 3;
        } else {
            if (!firstWord)
                cout << " ";

            while (i < (int)s.size() &&
                   !(i + 2 < (int)s.size() && s.substr(i, 3) == "WUB")) {
                cout << s[i];
                i++;
            }

            firstWord = false;
        }
    }

    return 0;
}
