#include "bits/stdc++.h"
using namespace std;

int gcd(int a, int b){
	if (b == 0) return a;
	return gcd(b, a % b);
}
 
bool solve(){
	int n; cin >> n;
	vector<int> p(n), s(n), res(n);
	for (auto &u: p) cin >> u;
	for (auto &u: s) cin >> u;
	
	if(p[n - 1] != s[0]) return 0;
	
	for(int i = 0; i < n - 1; i++)
		if(gcd(p[i], p[i + 1]) != p[i + 1] || gcd(s[n - i - 1], s[n - i - 2]) != s[n - i - 2]) return 0;
	
	for(int i = 0; i < n; i++)
		if(gcd(p[i-1] / p[i], s[i] / gcd(p[i], s[i])) != 1) return false;
	
	return true;
}
 
int main(){
	
	int t; cin >> t;
		
	while(t--) cout << (solve() ? "YES" : "NO") << "\n";
 
	return 0;
}
