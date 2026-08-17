#include "bits/stdc++.h"
using namespace std;
 
bool solve(){
	int n, k; cin >> n >> k;
	vector<int> h(n);
	for(auto &u: h) cin >> u;
	int current = h[k - 1];
	int water = 1;
	sort(h.begin(), h.end());
	bool possible = 1;
	while (possible && current != h[n - 1]){
		if(water > current){
			possible = 0;
			break;
		}
		auto it = upper_bound(h.begin(), h.end(), current);
		if(it == h.end()) return true;
		int next = *it;
		int time = next - current;
		if (water + time > current + 1){
			possible = 0;
			break;
		}
		current = next;
		water += time;
	}
	
	return possible;
}
 
int main(){
	
	int t; cin >> t;
		
	while(t--) cout << (solve() ? "YES" : "NO") << "\n";
 
	return 0;
}
