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
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
constexpr static int inf = 2e9;
constexpr static ll linf = 1e18;
constexpr static int mod1 = 1e9 + 7;
constexpr static int mod2 = 998244353;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// template per codice c++ particolarmente lungo
// compilare con: g++ codice.cpp -o a -O1 -g -fsanitize=address,undefined -Wall -Wextra -Wshadow -Wpedantic

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &u: v) cin >> u;
    vector<int> tmp;
    for (int i = 0; i < n; i++)
        if (v[i] != i + 1)
            tmp.emplace_back(v[i]);
    reverse(all(tmp));
    vector<int> x = tmp;
    sort(all(x));
    cout << (x == tmp ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t; cin >> t; // testcase
    while (t--)
        solve();
}
