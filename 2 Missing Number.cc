#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, num, mask = 0;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; ++i) {
        mask ^= i;
    }
    string s;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> num) {
        mask ^= num;
    }
    cout << mask << "\n";
    return 0;
}
