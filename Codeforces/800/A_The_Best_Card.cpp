#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2)
        return false;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (isPrime(n + 1))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
