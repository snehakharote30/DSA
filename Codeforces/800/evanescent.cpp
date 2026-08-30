#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Compressed length of original string
        int ans = 1;

        for(int i = 1; i < n; i++) {
            if(s[i] != s[i - 1]) {
                ans++;
            }
        }

        int reduction = 0;

        // We can delete only an internal character
        for(int i = 1; i < n - 1; i++) {

            // Example: aba -> aa
            // Compression decreases by 2
            if(s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
                reduction = max(reduction, 2);
            }

            // Example: abc -> ac
            // Compression decreases by 1
            else if(s[i - 1] != s[i] && s[i] != s[i + 1]) {
                reduction = max(reduction, 1);
            }
        }

        cout << ans - reduction << '\n';
    }

    return 0;
}
