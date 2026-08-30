#include "bits/stdc++.h"
using namespace std;

int solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (auto &u: a) cin >> u;
    if (n == 1) return a[0];
    return gcd(a[0], a[n - 1]);
}

int main() {
    int t; cin >> t;
    while (t--)
        cout << solve() << "\n";
}
