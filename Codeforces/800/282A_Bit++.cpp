/*
    Problem: 282A - Bit++
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Initialize x = 0.
    - Read each statement.
    - If the statement contains "++", increment x.
    - Otherwise, decrement x.
    - Print the final value of x.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;

    while (n--) {
        string s;
        cin >> s;

        if (s[1] == '+')
            x++;
        else
            x--;
    }

    cout << x;

    return 0;
}
