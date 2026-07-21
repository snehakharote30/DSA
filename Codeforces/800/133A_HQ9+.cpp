/*
    Problem: 133A - HQ9+
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Scan the input string.
    - If any character is 'H', 'Q', or '9',
      the program produces output.
    - Otherwise, it does not.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string p;
    cin >> p;

    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
