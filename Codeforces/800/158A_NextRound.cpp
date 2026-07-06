/*
    Problem: 158A - Next Round
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the number of participants (n) and the qualifying position (k).
    - The score of the k-th participant becomes the qualifying score.
    - Count every participant whose score is:
        1. Greater than or equal to the qualifying score.
        2. Greater than 0.
    - Print the total count.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int qualifyingScore = scores[k - 1];
    int qualified = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= qualifyingScore && scores[i] > 0) {
            qualified++;
        }
    }

    cout << qualified;

    return 0;
}
