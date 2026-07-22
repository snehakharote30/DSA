/*
    Problem: 469A - I Wanna Be the Guy
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Store all levels that either X or Y can pass.
    - Check whether every level from 1 to n is covered.
    - If yes, print "I become the guy."
      otherwise print "Oh, my keyboard!".

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> canPass(n + 1, false);

    int p;
    cin >> p;
    while (p--) {
        int x;
        cin >> x;
        canPass[x] = true;
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        canPass[x] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!canPass[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy!";

    return 0;
}
