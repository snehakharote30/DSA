/*
    Problem: 58A - Chat Room
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - We need to check whether "hello" appears as a subsequence
      of the given string.
    - Traverse the string while maintaining an index over "hello".
    - Whenever the current character matches the required character
      in "hello", move to the next character.
    - If all five characters are matched, print "YES";
      otherwise, print "NO".

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int index = 0;

    for (char c : s) {
        if (index < target.size() && c == target[index]) {
            index++;
        }
    }

    cout << (index == target.size() ? "YES" : "NO");

    return 0;
}
