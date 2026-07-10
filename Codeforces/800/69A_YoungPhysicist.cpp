/*
    Problem: 69A - Young Physicist
    Platform: Codeforces
    Difficulty: 1000

    Approach:
    - Read all force vectors.
    - Sum their x, y, and z components separately.
    - If all three sums are zero, the body is in equilibrium.
    - Otherwise, it is not.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sumX = 0, sumY = 0, sumZ = 0;

    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;

        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX == 0 && sumY == 0 && sumZ == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
