#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        bool have[26] = {false};

        // Initial ordinary words
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            have[s[0] - 'a'] = true;
        }

        vector<string> a(m);

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        vector<bool> created(m, false);

        int cnt = 0;

        // Keep trying to create abbreviations
        while (true) {
            bool changed = false;

            for (int i = 0; i < m; i++) {

                if (created[i])
                    continue;

                bool possible = true;

                // Check whether every letter is currently available
                for (char c : a[i]) {
                    if (!have[c - 'A']) {
                        possible = false;
                        break;
                    }
                }

                if (possible) {
                    created[i] = true;
                    cnt++;

                    // This abbreviation becomes a word.
                    // Its first letter becomes available.
                    have[a[i][0] - 'A'] = true;

                    changed = true;
                }
            }

            if (!changed)
                break;
        }

        if (cnt == m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
