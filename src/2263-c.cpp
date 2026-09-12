#include "bits/stdc++.h"
using namespace std;
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define __ << " " <<
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
template<typename... Args>
using vec = vector<Args...>;
typedef long long ll;
constexpr static int inf = 2e9;
constexpr static ll linf = 1e18;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<int> sweep(n + 1);
    for (int k = 1; k <= n; k++)
        sweep[min(1LL * n, 1LL * v[k] * k)]++, sweep[min(1LL * (v[k] + 1) * k, 1LL * n)]--;
    vector<int> ans;
    int swp = 0;
    for (int i = 0; i < n; i++) {
        swp += sweep[i];
        if (swp == 0)
            ans.eb(i);
    }
    cout << (int)ans.size() << "\n";
    for (auto u: ans) cout << u << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--)
        solve();
}
