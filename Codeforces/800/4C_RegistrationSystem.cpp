/*
    Problem: 4C - Registration System
    Platform: Codeforces
    Difficulty: 1100

    Approach:
    - Maintain a map storing how many times each username has appeared.
    - If a username is new, print "OK" and initialize its count.
    - Otherwise, print username + current count and increment the count.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--) {
        string name;
        cin >> name;

        if (mp.find(name) == mp.end()) {
            cout << "OK\n";
            mp[name] = 1;
        } else {
            cout << name << mp[name] << "\n";
            mp[name]++;
        }
    }

    return 0;
}
