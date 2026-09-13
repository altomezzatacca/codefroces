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

ll factorial (ll n) {
    ll ans = 1;
    for (int i = 2; i <= n; i++)
        ans = (ans * i) % mod2;
    return ans;
}

ll fpow (ll b, ll e) {
    ll x = 1;
    while (e) {
        if (e & 1) x = (x * b) % mod2;
        e >>= 1;
        b = (b * b) % mod2;
    }
    return x % mod2;
}

ll mod_inv (ll n) {
    return fpow(n, mod2 - 2);
}

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for (auto &u: v) cin >> u;
    if (n == 1) {
        cout << 0 << "\n";
        return;
    }
    ll ans = 0, fact = factorial(n - 1);
    sort(all(v));
    vector<ll> sfx(n);
    sfx[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
        sfx[i] = (sfx[i + 1] + v[i]) % mod2;
    for (int i = 0; i < n - 1; i++) {
        ll cnt_up = n - 1 - i;
        ll sum_up = sfx[i + 1];
        ll vsum = ((v[i] % mod2) * cnt_up) % mod2;
        ll x = (sum_up - vsum + mod2) % mod2;
        x = (x * mod_inv(cnt_up)) % mod2;
        ans = (ans + x % mod2) % mod2;
    }
    ans = (ans * fact) % mod2;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t; cin >> t; // testcase
    while (t--)
        solve();
}
