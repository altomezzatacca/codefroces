#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < n / k; i++) {
        bool b = 1;
        for (int j = 0; j < k; j++)
            if (s[i * k + j] == '0')
                b = 0;
        if (b)
            ans++;
    }
    cout << ans << "\n";
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}
