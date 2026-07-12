/*
    Problem: 271A - Beautiful Year
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Start checking from the year after the given year.
    - For each year, verify whether all its digits are distinct.
    - The first valid year is the answer.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
#include <set>
using namespace std;

bool hasDistinctDigits(int year) {
    set<int> digits;

    while (year > 0) {
        int digit = year % 10;

        if (digits.count(digit))
            return false;

        digits.insert(digit);
        year /= 10;
    }

    return true;
}

int main() {
    int year;
    cin >> year;

    year++;

    while (!hasDistinctDigits(year))
        year++;

    cout << year;

    return 0;
}
