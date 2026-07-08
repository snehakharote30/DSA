/*
    Problem: 791A - Bear and Big Brother
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read Limak's weight (a) and Bob's weight (b).
    - Every year:
        * Limak's weight becomes 3 times.
        * Bob's weight becomes 2 times.
    - Count the number of years until Limak becomes strictly heavier than Bob.

    Time Complexity: O(years)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int years = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    cout << years;

    return 0;
}
