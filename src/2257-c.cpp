#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>> adj(n);
    for (int i = 1; i < n; i++) {
        int p; cin >> p; p--;
        adj[p].emplace_back(i);
    }
    vector<int> toposort;
    function <void(int)> dfs = [&] (int node) -> void {
        for(auto u: adj[node])
            dfs(u);
        toposort.emplace_back(node);
    };
    dfs(0);
    int m; cin >> m;
    set<int> s;
    for (int i = 0, k; i < m; i++, s.insert(k - 1))
        cin >> k;
    int k = m - 1;
    cout << k << " ";
    for (int i = 0; i < n && k; i++) {
        if (s.count(toposort[i])) {
            cout << toposort[i] + 1 << " ";
            k--;
        }
    }
    cout << "\n";
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}
