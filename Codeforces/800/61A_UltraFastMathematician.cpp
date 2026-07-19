/*
    Problem: 61A - Ultra-Fast Mathematician
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the two binary strings.
    - Compare corresponding characters.
    - If they are different, output '1' (XOR).
    - Otherwise, output '0'.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        cout << (a[i] == b[i] ? '0' : '1');
    }

    return 0;
}
