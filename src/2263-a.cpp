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
    vector<int> a(n);
    array<int, 2> v = {0, 0};
    for (auto &u: a) cin >> u;
    for (auto u: a) v[u]++;
    cout << (v[1] >= v[0] ? "Bessie\n" : "Elsie\n");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--)
        solve();
}
