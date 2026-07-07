/*
    Problem: 263A - Beautiful Matrix
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Traverse the 5 × 5 matrix to find the position of the number 1.
    - The center of the matrix is at position (3, 3).
    - The minimum number of moves required is the Manhattan Distance:
          |row - 3| + |column - 3|
    - Print the calculated distance.

    Time Complexity: O(25) ≈ O(1)
    Space Complexity: O(1)
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int row = -1, col = -1;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int value;
            cin >> value;

            if (value == 1) {
                row = i;
                col = j;
            }
        }
    }

    cout << abs(row - 3) + abs(col - 3);

    return 0;
}
