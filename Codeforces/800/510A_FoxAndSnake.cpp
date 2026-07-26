/*
    Problem: 510A - Fox And Snake
    Platform: Codeforces
    Difficulty: 1000

    Approach:
    - Even-indexed rows (0,2,4...) are completely filled with '#'.
    - Odd-indexed rows alternate:
        - First odd row: '#' at the last column.
        - Next odd row: '#' at the first column.
    - Repeat this pattern.

    Time Complexity: O(n × m)
    Space Complexity: O(m)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int r = 0; r < n; r++) {
        if (r % 2 == 0) {
            cout << string(m, '#') << "\n";
        } else {
            string row(m, '.');

            if ((r / 2) % 2 == 0)
                row[m - 1] = '#';
            else
                row[0] = '#';

            cout << row << "\n";
        }
    }

    return 0;
}
