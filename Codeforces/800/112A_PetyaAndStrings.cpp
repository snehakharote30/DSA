/*
    Problem: 112A - Petya and Strings
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the two input strings.
    - Convert both strings to lowercase.
    - Compare them lexicographically:
        * Print -1 if the first string is smaller.
        * Print 1 if the first string is greater.
        * Print 0 if both strings are equal.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string first, second;
    cin >> first >> second;

    for (char &ch : first) {
        ch = tolower(ch);
    }

    for (char &ch : second) {
        ch = tolower(ch);
    }

    if (first < second)
        cout << -1;
    else if (first > second)
        cout << 1;
    else
        cout << 0;

    return 0;
}
