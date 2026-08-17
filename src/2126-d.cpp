#include "bits/stdc++.h"
using namespace std;

struct casino{
	int l, r, real;
};
 
bool comp(casino a, casino b){
	return a.real<b.real;
}
 
void solve(){
	int n, k; cin >> n >> k;
	vector<casino> C(n);
	for(auto &[l, r, real] : C) cin >> l >> r >> real;
	int ans = k;
	sort(C.begin(), C.end(), comp);
	for(int i = 0; i < n; i++){
		if(C[i].l <= ans && ans <= C[i].r) ans = max(ans, C[i].real);
	}
 
    cout << ans << '\n';
}
 
int main(){
	
	int t; cin >> t;
		
	while(t--) solve();
 
	return 0;
}
