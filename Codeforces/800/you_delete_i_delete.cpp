#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Alice's move
        int pos = -1;

        // Find the first "01"
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '1') {
                pos = i;
                break;
            }
        }

        // If "01" was not found, delete any 0
        if (pos == -1) {
            pos = s.find('0');
        }

        s.erase(pos, 1);

        // Bob's move: delete the first 1
        pos = s.find('1');
        s.erase(pos, 1);

        cout << s << endl;
    }

    return 0;
}
