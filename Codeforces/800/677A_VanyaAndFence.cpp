/*
    Problem: 677A - Vanya and Fence
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Traverse the heights of all friends.
    - If a friend's height is greater than the fence height,
      they occupy width 2 (bend down).
    - Otherwise, they occupy width 1.
    - Sum the widths and print the result.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int totalWidth = 0;

    for (int i = 0; i < n; i++) {
        int height;
        cin >> height;

        if (height > h)
            totalWidth += 2;
        else
            totalWidth += 1;
    }

    cout << totalWidth;

    return 0;
}
