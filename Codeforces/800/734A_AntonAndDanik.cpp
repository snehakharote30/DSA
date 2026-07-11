/*
    Problem: 734A - Anton and Danik
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Count the number of games won by Anton ('A')
      and Danik ('D').
    - Compare both counts:
        * Anton > Danik  -> "Anton"
        * Danik > Anton  -> "Danik"
        * Equal          -> "Friendship"

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int antonWins = 0, danikWins = 0;

    for (char c : s) {
        if (c == 'A')
            antonWins++;
        else
            danikWins++;
    }

    if (antonWins > danikWins)
        cout << "Anton";
    else if (danikWins > antonWins)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
