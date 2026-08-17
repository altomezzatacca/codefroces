#include "bits/stdc++.h"
using namespace std;
 
int solve(int n){
	int lg = floor(log2(n));
	return (1 << lg) - 1;
}
 
int main(){
	
	int t; cin >> t;
	
	while(t--){
		int N; cin >> N;
		cout << solve(N) << "\n";
	}
	
	return 0;
}
