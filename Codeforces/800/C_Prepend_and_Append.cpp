#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        string s;

        scanf("%d", &n);
        cin >> s;

        int left = 0;
        int right = n - 1;

        while (left < right && s[left] != s[right]) {
            left++;
            right--;
        }

        printf("%d\n", right - left + 1);
    }

    return 0;
}
