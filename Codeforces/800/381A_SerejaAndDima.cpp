/*
    Problem: 381A - Sereja and Dima
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Maintain two pointers at the ends of the array.
    - Each player greedily picks the larger of the two end cards.
    - Alternate turns until no cards remain.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int left = 0, right = n - 1;
    long long sereja = 0, dima = 0;
    bool serejaTurn = true;

    while (left <= right) {
        int pick;

        if (a[left] > a[right]) {
            pick = a[left];
            left++;
        } else {
            pick = a[right];
            right--;
        }

        if (serejaTurn)
            sereja += pick;
        else
            dima += pick;

        serejaTurn = !serejaTurn;
    }

    printf("%lld %lld\n", sereja, dima);

    return 0;
}
