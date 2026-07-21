/*
    Problem: 405A - Gravity Flip
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - After gravity is flipped, columns arrange themselves
      in non-decreasing order of heights.
    - Simply sort the array and print it.

    Time Complexity: O(n log n)
    Space Complexity: O(1) (excluding input array)
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

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[i == n - 1];

    return 0;
}
