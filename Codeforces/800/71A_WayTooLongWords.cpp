/*
Problem: 71A - Way Too Long Words
Platform: Codeforces
Rating: 800

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s.length() > 10)
            cout << s[0] << s.length() - 2 << s.back() << '\n';
        else
            cout << s << '\n';
    }

    return 0;
}
