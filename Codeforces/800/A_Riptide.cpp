#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int rounds = 0;

        while (a != b && b != c && a != c) {
            int mn = min({a, b, c});
            int mx = max({a, b, c});

            // largest gives 1 token to smallest
            if (a == mn)
                a++;
            else if (b == mn)
                b++;
            else
                c++;

            if (a == mx)
                a--;
            else if (b == mx)
                b--;
            else
                c--;

            rounds++;
        }

        printf("%d\n", rounds);
    }

    return 0;
}
