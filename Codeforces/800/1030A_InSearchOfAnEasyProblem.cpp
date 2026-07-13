/*
    Problem: 1030A - In Search of an Easy Problem
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the opinions of all participants.
    - If any participant answers 1, the problem is HARD.
    - Otherwise, the problem is EASY.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool hard = false;

    while (n--) {
        int opinion;
        cin >> opinion;

        if (opinion == 1) {
            hard = true;
        }
    }

    cout << (hard ? "HARD" : "EASY");

    return 0;
}
