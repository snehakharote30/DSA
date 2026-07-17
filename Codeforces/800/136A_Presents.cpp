/*
    Problem: 136A - Presents
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Friend i gives a present to friend p[i].
    - We need to determine who gave a present to each friend.
    - Store the reverse mapping:
        giver[p[i]] = i
    - Finally, print the giver array from 1 to n.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> giver(n + 1);

    for (int i = 1; i <= n; i++) {
        int receiver;
        cin >> receiver;
        giver[receiver] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << giver[i];
        if (i != n) cout << " ";
    }

    return 0;
}
