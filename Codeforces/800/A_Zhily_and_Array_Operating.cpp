#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] <= 0 && a[i + 1] > 0) {
                a[i] += a[i + 1];
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                ans++;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
