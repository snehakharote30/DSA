/*
    Problem: 617A - Elephant
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - The elephant can move a maximum of 5 units in one step.
    - To minimize the number of steps, always take the largest possible step.
    - The answer is the ceiling of x / 5.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    cout << (x + 4) / 5;

    return 0;
}
