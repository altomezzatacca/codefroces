#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &u: v) cin >> u;
    array<int, 4> ans;
    for (int i = 0; i < 4; i++)
        ans[i] = 0;
    for (auto u: v) {
        int x = u % 4;
        ans[x]++;
    }
    cout << max({ans[0], ans[1] + ans[3], ans[2]}) << "\n";
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}
