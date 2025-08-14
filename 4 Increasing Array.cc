#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 0;
    long long c = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        if (a[i] > a[i + 1]) {
            c += (a[i] - a[i + 1]);
            a[i + 1] = a[i];
        }
    }
    cout << c << "\n";
}
