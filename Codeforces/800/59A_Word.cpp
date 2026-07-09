/*
    Problem: 59A - Word
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Count the number of uppercase and lowercase letters.
    - If uppercase letters are more, convert the entire word to uppercase.
    - Otherwise, convert the entire word to lowercase.
    - If both counts are equal, convert to lowercase.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0, lower = 0;

    for (char c : s) {
        if (isupper(c))
            upper++;
        else
            lower++;
    }

    if (upper > lower) {
        for (char &c : s)
            c = toupper(c);
    } else {
        for (char &c : s)
            c = tolower(c);
    }

    cout << s;

    return 0;
}
