/*
    Problem: 116A - Tram
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Initially, the tram is empty.
    - At each stop:
        1. Passengers exit.
        2. Passengers enter.
    - Track the current number of passengers.
    - Maintain the maximum number of passengers seen at any point.
    - That maximum is the minimum required tram capacity.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int currentPassengers = 0;
    int minimumCapacity = 0;

    while (n--) {
        int exitPassengers, enterPassengers;
        cin >> exitPassengers >> enterPassengers;

        currentPassengers -= exitPassengers;
        currentPassengers += enterPassengers;

        minimumCapacity = max(minimumCapacity, currentPassengers);
    }

    cout << minimumCapacity;

    return 0;
}
