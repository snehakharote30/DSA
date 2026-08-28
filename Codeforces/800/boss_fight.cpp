#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int ans = 0;
        int largestDuplicate = 0;

        for (auto p : freq) {
            ans += p.first;

            if (p.second >= 2) {
                largestDuplicate = max(largestDuplicate, p.first);
            }
        }

        if (largestDuplicate != 0) {
            ans += largestDuplicate;
        }

        cout << ans << '\n';
    }

    return 0;
}
