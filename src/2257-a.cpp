#include "bits/stdc++.h"
using namespace std;

bool solve () {
    int n, m; cin >> n >> m;
    map<char, bool> occ;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        occ[s[0]] = 1;
    }
    bool ans = 1;
    for (int i = 0; i < m; i++) {
        string s; cin >> s;
        for (int k = 0; k < (int)s.size(); k++) {
            char c = s[k] + 'a' - 'A';
            if (occ[c] == 0) ans = 0;
        }
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while (t--)
        cout << (solve() ? "YES\n" : "NO\n");
}
