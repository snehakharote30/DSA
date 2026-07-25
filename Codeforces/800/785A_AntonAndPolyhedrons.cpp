/*
    Problem: 785A - Anton and Polyhedrons
    Platform: Codeforces
    Difficulty: 800

    Approach:
    - Store the number of faces for each polyhedron.
    - Read each polyhedron name.
    - Add its corresponding number of faces.
    - Print the total.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };

    int n;
    cin >> n;

    int total = 0;

    while (n--) {
        string s;
        cin >> s;
        total += faces[s];
    }

    cout << total;

    return 0;
}
