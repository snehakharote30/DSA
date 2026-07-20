/*
    Problem: 520A - Pangram
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Convert every character to lowercase.
    - Insert each character into a set.
    - If the set contains all 26 letters, print "YES";
      otherwise print "NO".

    Time Complexity: O(n)
    Space Complexity: O(26) = O(1)
*/

#include <iostream>
#include <set>
#include <cctype>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> letters;
    for (char c : s)
        letters.insert(tolower(c));

    cout << (letters.size() == 26 ? "YES" : "NO");

    return 0;
}
