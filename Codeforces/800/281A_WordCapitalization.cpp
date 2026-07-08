/*
    Problem: 281A - Word Capitalization
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the input word.
    - Convert only the first character to uppercase.
    - Leave the remaining characters unchanged.
    - Print the modified word.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;

    word[0] = toupper(word[0]);

    cout << word;

    return 0;
}
