/*
    Problem: 467A - George and Accommodation
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - For each room, calculate the number of free places.
    - If the room has at least two free places (q - p >= 2),
      George and Alex can move into that room.
    - Count all such rooms.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int availableRooms = 0;

    while (n--) {
        int occupied, capacity;
        cin >> occupied >> capacity;

        if (capacity - occupied >= 2) {
            availableRooms++;
        }
    }

    cout << availableRooms;

    return 0;
}
