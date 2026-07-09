/*
    Problem: 118A - String Task
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Convert each character to lowercase.
    - Ignore vowels (a, o, y, e, u, i).
    - For every consonant, append '.' followed by the character.
    - Print the resulting string.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string vowels = "aoyeui";
    string result;

    for (char c : s) {
        c = tolower(c);

        if (vowels.find(c) == string::npos) {
            result += '.';
            result += c;
        }
    }

    cout << result;

    return 0;
}
