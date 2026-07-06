/*
    Problem: 50A - Domino Piling
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Each domino covers exactly 2 squares.
    - The board has m × n squares.
    - The maximum number of dominoes that can fit is simply:
          (m × n) / 2
      using integer division.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    cout << (m * n) / 2;

    return 0;
}
