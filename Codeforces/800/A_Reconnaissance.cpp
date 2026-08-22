#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long d;

    scanf("%d %lld", &n, &d);

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i != j && abs(a[i] - a[j]) <= d) {
                ans++;
            }
        }
    }

    printf("%lld\n", ans);

    return 0;
}
