/*
    Problem: 1352A - Sum of Round Numbers
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Traverse each digit of the number from right to left.
    - If the digit is non-zero, create its round number
      (digit × place value).
    - Store all such round numbers.
    - Print the count and the stored numbers.

    Time Complexity: O(number of digits) = O(log10 n)
    Space Complexity: O(number of non-zero digits)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> parts;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;

            if (digit != 0)
                parts.push_back(digit * place);

            n /= 10;
            place *= 10;
        }

        cout << parts.size() << "\n";

        for (int x : parts)
            cout << x << " ";

        cout << "\n";
    }

    return 0;
}
