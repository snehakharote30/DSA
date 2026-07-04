/*
Problem: 4A - Watermelon
Platform: Codeforces
Rating: 800

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
