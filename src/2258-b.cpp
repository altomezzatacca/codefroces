#include "bits/stdc++.h"
using namespace std;

int solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (auto &u: a) cin >> u;
    vector<int> val(2 * m + 1); // v[i] = # a[i] == 2 * i
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            val[a[i] / 2]++;
    vector<int> sweep(m + 1);
    for (int i = 0; i < n; i++)
        sweep[a[i]]++;
    int cur = n, ans = 0;
    for (int i = 0; i <= m; i++) {
        ans = max(ans, cur + val[i]);
        cur -= sweep[i];
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while (t--)
        cout << solve() << "\n";
}
