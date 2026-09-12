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
    int n, k; cin >> n >> k;
    if (k < n || k >= 2 * n) {cout << -1 << "\n"; return;}
    vector<vector<int>> a(n, vector<int> (n, 0));
    set<int> s;
    for (int i = 1; i <= n * n; i++)
        s.insert(i);
    for (int i = 0; i < k - n + 1; i++)
        a[0][i] = *s.begin(), s.erase(s.begin());
    for (int i = 1; i < 2 * n - k; i++)
        a[i][i + k - n] = *s.begin(), s.erase(s.begin());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0) {
                a[i][j] = *s.begin();
                s.erase(s.begin());
            }
        }
    }
    for (int i = 0; i < n; i++, cout << "\n")
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--)
        solve();
}
