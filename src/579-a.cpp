#include "bits/stdc++.h"
using namespace std;
 
int main(){
	
	int n; cin >> n;
	
	int lg = floor(log2(n));
	
	int ans = 0;
	
	for(int i = 0; i <= lg; i++)
		if(n & (1 << i)) ans++;
	
	cout << ans;
	
	return 0;
}
