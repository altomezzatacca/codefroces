#include "bits/stdc++.h"
using namespace std;
using ll = long long;

int solve() {
    int n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &u: a) cin >> u;
    for (auto &u: b) cin >> u;
    ll aa = a[n - 1], bb = b[m - 1];
    for (int i = 0; i < n - 1; i++)
        aa += a[i] - a[i + 1] + 1;
    for (int i = 0; i < m - 1; i++)
        bb += b[i] - b[i + 1] + 1;
    return (aa >= bb ? 1 : 2);
}

int main() {
    int t; cin >> t;
    while (t--)
        cout << solve() << "\n";
}
