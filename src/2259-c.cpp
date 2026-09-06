#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &u: v) cin >> u;
    int nxt = n;
    int ix_start = 0, ix_end = 0;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        int x = v[i];
        if (x == 0) continue;
        if (x == -1) {
            if (nxt - i + 1 > ans && nxt != n) {
                ans = nxt - i + 1;
                ix_start = i, ix_end = nxt;
            }
            if (nxt == n) {
                nxt = i;
                ix_start = ix_end = i;
            }
        }
        if (x == 1) {
            if (nxt - i + 1 > ans && nxt != n) {
                ans = nxt - i + 1;
                ix_start = i, ix_end = nxt;
            }
            nxt = i;
        }
    }
    for (int i = 0; i < n; i++) {
        int &x = v[i];
        if (x != -1) continue;
        if (i == ix_start) x = 1;
        else if (i == ix_end) x = 1;
        else x = 0;
    }
    for (auto u: v) cout << u << " ";
    cout << "\n";
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}
