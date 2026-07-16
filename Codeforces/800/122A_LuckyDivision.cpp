/*
    Problem: 122A - Lucky Division
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Generate all lucky numbers (containing only digits 4 and 7)
      up to 1000 using recursion.
    - Check whether the given number is divisible by any lucky number.
    - If divisible, print "YES"; otherwise, print "NO".

    Time Complexity: O(k), where k is the number of lucky numbers (< 130)
    Space Complexity: O(k)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> luckyNumbers;

void generateLuckyNumbers(int current) {
    if (current > 1000) return;

    if (current != 0)
        luckyNumbers.push_back(current);

    generateLuckyNumbers(current * 10 + 4);
    generateLuckyNumbers(current * 10 + 7);
}

int main() {
    generateLuckyNumbers(0);

    int n;
    cin >> n;

    for (int lucky : luckyNumbers) {
        if (n % lucky == 0) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
