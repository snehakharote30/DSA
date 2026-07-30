/*
    Problem: 141A - Amusing Joke
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Count letter frequencies in guest and host names.
    - Subtract frequencies using the pile string.
    - If every frequency becomes zero, print YES; otherwise NO.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;

    int cnt[26] = {0};

    for (char c : guest)
        cnt[c - 'A']++;

    for (char c : host)
        cnt[c - 'A']++;

    for (char c : pile)
        cnt[c - 'A']--;

    bool ok = true;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] != 0) {
            ok = false;
            break;
        }
    }

    printf(ok ? "YES\n" : "NO\n");

    return 0;
}
