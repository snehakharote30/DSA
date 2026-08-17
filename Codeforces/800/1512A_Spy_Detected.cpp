/*
Problem: 1512A - Spy Detected!
Platform: Codeforces
Difficulty: 800

Approach:
- Read the array.
- The odd element is the one whose value is different from the other elements.
- Compare each element with the first few elements to determine
  which value is the unique one.
- Once the unique value is known, find its index.

Time Complexity: O(n) per test case
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[100];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int common;

        // Determine the common value
        if (a[0] == a[1])
            common = a[0];
        else if (a[0] == a[2])
            common = a[0];
        else
            common = a[1];

        // Find the unique element
        for (int i = 0; i < n; i++) {
            if (a[i] != common) {
                printf("%d\n", i + 1);
                break;
            }
        }
    }

    return 0;
}
