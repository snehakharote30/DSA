/*
    Problem: 25A - IQ Test
    Platform: Codeforces
    Difficulty: 1300

    Approach:
    - Count even and odd numbers.
    - The parity occurring once is the answer.
    - Output the 1-based index of that number.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int a[100];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    int targetParity = (evenCount == 1) ? 0 : 1;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == targetParity) {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}
