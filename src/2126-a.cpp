#include "bits/stdc++.h"
using namespace std;
 
void solve(){
	string x; cin >> x;
	char c = x[0];
	for(int i = 1; i < x.size(); i++) c = min(c, x[i]);
	cout << c - '0' << "\n";
}
 
int main(){
	
	int t; cin >> t;
		
	while(t--) solve();
 
	return 0;
}
