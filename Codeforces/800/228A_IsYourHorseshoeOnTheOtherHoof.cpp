/*
    Problem: 228A - Is your horseshoe on the other hoof?
    Platform: Codeforces
    Difficulty: 900

    Approach:
    - Store the colors of the four horseshoes in a set.
    - A set keeps only distinct elements.
    - The number of horseshoes to buy is:
        4 - (number of distinct colors).

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> colors;

    for (int i = 0; i < 4; i++) {
        int color;
        cin >> color;
        colors.insert(color);
    }

    cout << 4 - colors.size();

    return 0;
}
