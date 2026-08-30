#include "bits/stdc++.h"
using namespace std;
int n;

bool ask(int a, int b, int l) {
    cout << "? " << a << " " << b << " " << l << "\n";
    cout.flush();
    int bb; cin >> bb;
    if (bb == -1) exit(0);
    return bb;
}

void solve() {
    cin >> n;
    int a = 1, b = 2;
    int l = 0;
    for (int i = 2; i <= n; i++)
        while (l < n - 1 && ask(a, i, l + 1))
            b = i, l++;
    swap(a, b);
    if (l == n - 1) {
        cout << "! " << a << " " << b << " " << l << "\n";
        cout.flush();
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (i == a) continue;
        while (l < n - 1 && ask(a, i, l + 1))
            b = i, l++;
    }
    cout << "! " << a << " " << b << " " << l << "\n";
    cout.flush();
}

int main() {
    int t; cin >> t;
    while (t--)
        solve();
}
