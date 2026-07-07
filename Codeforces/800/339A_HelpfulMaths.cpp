/*
    Problem: 339A - Helpful Maths
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the input expression as a string.
    - Extract all the numbers while ignoring the '+' characters.
    - Sort the numbers in non-decreasing order.
    - Print the sorted numbers separated by '+'.

    Time Complexity: O(n log n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string expression;
    cin >> expression;

    vector<int> numbers;

    for (char ch : expression) {
        if (ch != '+') {
            numbers.push_back(ch - '0');
        }
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++) {
        if (i > 0)
            cout << "+";
        cout << numbers[i];
    }

    return 0;
}
