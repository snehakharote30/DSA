/*
    Problem: 236A - Boy or Girl
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Read the username.
    - Store all unique characters in a set.
    - If the number of distinct characters is even,
      print "CHAT WITH HER!".
    - Otherwise, print "IGNORE HIM!".

    Time Complexity: O(n log n)
    Space Complexity: O(n)
*/

#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> uniqueCharacters;

    for (char ch : username) {
        uniqueCharacters.insert(ch);
    }

    if (uniqueCharacters.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
