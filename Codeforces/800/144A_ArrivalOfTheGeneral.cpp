/*
    Problem: 144A - Arrival of the General
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Find the leftmost tallest soldier.
    - Find the rightmost shortest soldier.
    - Moves needed:
        tallest -> front = maxPos
        shortest -> end = (n-1-minPos)
    - If shortest is before tallest, moving tallest first shifts
      the shortest one position left, so subtract one.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxVal = *max_element(a.begin(), a.end());
    int minVal = *min_element(a.begin(), a.end());

    int maxPos = -1, minPos = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] == maxVal && maxPos == -1)
            maxPos = i;          // leftmost maximum
        if (a[i] == minVal)
            minPos = i;          // rightmost minimum
    }

    int ans = maxPos + (n - 1 - minPos);

    if (minPos < maxPos)
        ans--;

    cout << ans;

    return 0;
}
