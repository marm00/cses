#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int maximum = 0;
    int curr = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (i != 0 && s[i] == s[i - 1]) {
            curr++;
        } else {
            maximum = max(curr, maximum);
            curr = 1;
        }
    }
    cout << max(curr, maximum) << "\n";
}
