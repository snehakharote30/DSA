/*
    Problem: 200B - Drinks
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the percentage of orange juice in each drink.
    - Calculate the total percentage.
    - Since equal portions of all drinks are mixed,
      the final concentration is the average percentage.
    - Print the answer with sufficient precision.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    double totalPercentage = 0.0;

    for (int i = 0; i < n; i++) {
        double percentage;
        cin >> percentage;
        totalPercentage += percentage;
    }

    cout << fixed << setprecision(12) << totalPercentage / n;

    return 0;
}
