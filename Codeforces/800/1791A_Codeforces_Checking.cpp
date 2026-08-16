/*
Problem: 1791A - Codeforces Checking
Platform: Codeforces
Difficulty: 800

Approach:
- The required string is "codeforces".
- For each given character, check whether it appears in "codeforces".
- If it appears, print "YES"; otherwise, print "NO".

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    string s = "codeforces";

    while (t--) {
        char c;
        scanf(" %c", &c);

        if (s.find(c) != string::npos)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
