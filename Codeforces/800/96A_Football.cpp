/*
    Problem: 96A - Football
    Platform: Codeforces
    Difficulty: 900

    Approach:
    - Traverse the string and count consecutive equal characters.
    - If the count reaches 7, the situation is dangerous.
    - Otherwise, it is safe.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int consecutive = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            consecutive++;

            if (consecutive >= 7) {
                cout << "YES";
                return 0;
            }
        } else {
            consecutive = 1;
        }
    }

    cout << "NO";

    return 0;
}
