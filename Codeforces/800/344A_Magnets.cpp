/*
    Problem: 344A - Magnets
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Each different adjacent magnet orientation starts a new group.
    - Initialize groups as 1 for the first magnet.
    - Compare each magnet with the previous one.
    - If the orientation changes, increment the group count.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string previous, current;
    cin >> previous;

    int groups = 1;

    for (int i = 1; i < n; i++) {
        cin >> current;
        if (current != previous) {
            groups++;
        }
        previous = current;
    }

    cout << groups;

    return 0;
}
