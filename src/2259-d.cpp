#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &u: v) cin >> u;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
        freq[v[i]]++;
    if (freq[0] == 1) {
        // un solo 0 -> MEX(A) = MEX(B) = 0, MEX(C) != 0
        cout << "NO\n";
        return;
    }
    if (freq[0] == 0) {
        // MEX(A) = MEX(B) = MEX(C) = 0
        cout << "YES\n";
        cout << string(n, 'A') << "\n";
        return;
    }
    // MEX(A) = MEX(B) = 1, MEX(C) = 0
    bool b = 0;
    string ans(n, 'C');
    for (int i = 0; i < n; i++) {
        int x = v[i];
        if (x == 0 && !b) {
            ans[i] = 'A';
            b = 1;
        } else if (x == 0) {
            ans[i] = 'B';
        }
    }
    cout << "YES\n" << ans << "\n";
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}
