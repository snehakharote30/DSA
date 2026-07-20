/*
    Problem: 705A - Hulk
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Print "I hate" for odd layers and "I love" for even layers.
    - Separate consecutive layers with " that ".
    - End the sentence with " it".

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " that ";
        cout << "I " << (i % 2 ? "hate" : "love");
    }

    cout << " it";
    return 0;
}
