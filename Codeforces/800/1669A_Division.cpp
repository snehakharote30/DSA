/*
    Problem: 1669A - Division?
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Compare the rating against the given ranges.
    - Print the corresponding division.

    Time Complexity: O(t)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int rating;
        scanf("%d", &rating);

        if (rating >= 1900)
            printf("Division 1\n");
        else if (rating >= 1600)
            printf("Division 2\n");
        else if (rating >= 1400)
            printf("Division 3\n");
        else
            printf("Division 4\n");
    }

    return 0;
}
