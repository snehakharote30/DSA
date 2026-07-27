/*
    Problem: 580A - Kefa and First Steps
    Platform: Codeforces
    Difficulty: 900

    Approach:
    - Traverse the array once.
    - Keep track of the current length of the non-decreasing subsegment.
    - If the current element is greater than or equal to the previous one,
      extend the segment.
    - Otherwise, start a new segment.
    - Store the maximum length encountered.

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

    int best = 1, cur = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1])
            cur++;
        else
            cur = 1;

        best = max(best, cur);
    }

    cout << best << endl;

    return 0;
}
