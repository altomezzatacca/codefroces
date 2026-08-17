#include "bits/stdc++.h"
using namespace std;
 
int main(){
	
	int n, m, k; cin >> n >> m >> k;
	int ans = 0;
	vector <int> M(m + 1);
	vector<vector<int>> val(m + 1, vector<int> (n, 0));
	
	for(auto &u: M) cin >> u;
	
	for(int i = 0; i < m + 1; i++)
		for(int j = 0; j < n; j++)
			if (M[i] & (1 << j)) val[i][j] = 1;
	
	
	for(int i = 0; i < m; i++){
		int x = 0;
		for(int j = 0; j < n; j++){
			if(val[i][j] != val[m][j]) x++;
		}
		if (x <= k) ans++;
	}
		
	cout << ans;
	
	return 0;
}
