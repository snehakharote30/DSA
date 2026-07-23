/*
    Problem: 996A - Hit the Lottery
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Always take the largest denomination possible.
    - Denominations: 100, 20, 10, 5, 1
    - This greedy approach gives the minimum number of bills.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int bills[] = {100, 20, 10, 5, 1};
    long long ans = 0;

    for (int x : bills) {
        ans += n / x;
        n %= x;
    }

    cout << ans;

    return 0;
}
