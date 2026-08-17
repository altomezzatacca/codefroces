#include "bits/stdc++.h"
using namespace std;
 
void solve(){
	int n, k; cin >> n >> k;
	vector<int> a(n);
	int ans = 0;
	for(auto &u: a) cin >> u;
	for(int i = 0; i + k - 1 < n; ){
		int bad_pos = 0;
		bool bad = false;
		for(int j = 0; j < k; j++){
			if(a[i + j] == 1){
				bad = true;
				bad_pos = i + j;
				break;
			}
		}
		if(bad) {
			i = bad_pos + 1;
		} else {
			i += k + 1;
			ans ++;
		}
	}
	cout << ans << "\n";
}
 
int main(){
	
	int t; cin >> t;
		
	while(t--) solve();
 
	return 0;
}
