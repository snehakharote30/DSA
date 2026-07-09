/*
    Problem: 977A - Wrong Subtraction
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Perform the subtraction operation k times.
    - If the last digit of the number is non-zero, subtract 1.
    - Otherwise, remove the last digit by dividing the number by 10.
    - Print the final value after all operations.

    Time Complexity: O(k)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    int k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << n;

    return 0;
}
