/*
    Problem: 266B - Queue at the School
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Simulate the queue for t seconds.
    - In each second, whenever a boy ('B') is immediately
      followed by a girl ('G'), swap them.
    - After swapping, skip the next position to avoid
      moving the same boy twice in one second.

    Time Complexity: O(n * t)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while (t--) {
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s;

    return 0;
}
