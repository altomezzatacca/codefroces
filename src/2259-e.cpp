#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    string ans (n, '1');
    for (auto &u: v) cin >> u;
    vector<int> sweep(n + 1);
    for (int i = 0; i < n; i++) {
        if (v[i] == -1 || v[i] == 0) continue;
        int l = max(0, i - v[i] + 1), r = min(n - 1, i + v[i] - 1);
        sweep[l]++, sweep[r + 1]--;
    }
    int active = 0;
    for (int i = 0; i < n; i++) {
        active += sweep[i];
        if (active)
            ans[i] = '0';
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == -1) continue;
        bool b = 0;
        if (i - v[i] >= 0 && ans[i - v[i]] == '1') b = 1;
        if (i + v[i] < n && ans[i + v[i]] == '1') b = 1;
        if (!b) {
            cout << -1 << "\n";
            return;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}
