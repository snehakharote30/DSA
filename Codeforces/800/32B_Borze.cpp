/*
Problem: 32B - Borze
Platform: Codeforces
Difficulty: 800

Approach:
- The Borze code uses:
    "."  -> 0
    "-." -> 1
    "--" -> 2

- Traverse the string from left to right.
- If the current character is '.':
    output 0
- Otherwise, the current character is '-':
    check the next character:
      ".": output 1
      "-": output 2
- Move accordingly after decoding.

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            printf("0");
        }
        else {
            if (s[i + 1] == '.') {
                printf("1");
            }
            else {
                printf("2");
            }
            i++;
        }
    }

    printf("\n");
    return 0;
}
