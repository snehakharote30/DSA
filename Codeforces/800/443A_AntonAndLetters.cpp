/*
    Problem: 443A - Anton and Letters
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the entire input line.
    - Store every lowercase letter in a set.
    - The size of the set equals the number of distinct letters.

    Time Complexity: O(n)
    Space Complexity: O(26) = O(1)
*/

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    set<char> letters;

    for (char c : line) {
        if (c >= 'a' && c <= 'z')
            letters.insert(c);
    }

    cout << letters.size();

    return 0;
}
