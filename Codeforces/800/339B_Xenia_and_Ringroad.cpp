/*
Problem: 339B - Xenia and Ringroad
Platform: Codeforces
Difficulty: 1000

Approach:
- Xenia starts at house 1.
- Houses are arranged in a circle and she can only move clockwise.
- For each task, calculate the clockwise distance from the current
  house to the required house.
- If the next house number is greater than or equal to the current
  house, the distance is simply next - current.
- Otherwise, she has to complete one full round of the ringroad:
      n - current + next
- Add all distances to get the minimum total time.

Time Complexity: O(m)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long time = 0;
    int current = 1;

    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;

        if (target >= current) {
            time += target - current;
        } else {
            time += n - current + target;
        }

        current = target;
    }

    cout << time << '\n';

    return 0;
}
