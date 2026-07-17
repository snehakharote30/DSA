/*
    Problem: 160A - Twins
    Platform: Codeforces
    Difficulty: 900

    Approach:
    - Calculate the total sum of all coin values.
    - Sort the coins in descending order.
    - Pick the largest coins one by one until the collected sum
      becomes strictly greater than the sum of the remaining coins.
    - Output the number of coins picked.

    Time Complexity: O(n log n)
    Space Complexity: O(1) (excluding input array)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);
    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        totalSum += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int collectedSum = 0;
    int coinsTaken = 0;

    for (int coin : coins) {
        collectedSum += coin;
        coinsTaken++;

        if (collectedSum > totalSum - collectedSum) {
            break;
        }
    }

    cout << coinsTaken;

    return 0;
}
