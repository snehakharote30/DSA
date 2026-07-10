/*
    Problem: 110A - Nearly Lucky Number
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Count the number of lucky digits (4 and 7) in the given number.
    - Check whether this count itself is a lucky number.
    - A lucky number contains only the digits 4 and 7.
    - Print "YES" if the count is lucky, otherwise print "NO".

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

bool isLucky(int x) {
    if (x == 0) return false;

    while (x > 0) {
        int digit = x % 10;
        if (digit != 4 && digit != 7)
            return false;
        x /= 10;
    }

    return true;
}

int main() {
    string n;
    cin >> n;

    int luckyCount = 0;

    for (char digit : n) {
        if (digit == '4' || digit == '7')
            luckyCount++;
    }

    cout << (isLucky(luckyCount) ? "YES" : "NO");

    return 0;
}
