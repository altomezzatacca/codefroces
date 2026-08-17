#include "bits/stdc++.h"
using namespace std;

bool solve(){
	int n, m; cin >> n >> m;
	if (n == 1 || m == 1) return 0;
	if (n > 2 || m > 2) return 1;
	return 0;
}

int main(){

	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
		
	while(t--) cout << (solve() ? "YES" : "NO") << "\n";
 
	return 0;
}
