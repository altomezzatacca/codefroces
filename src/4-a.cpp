#include "bits/stdc++.h"
using namespace std;
 
int main(){
	
	int n; cin >> n;
	
	bool b = 1;
	
	if (n <= 3) b = 0;
	else if (n & 1) b = 0;
	
	if (b) cout << "YES";
	else cout << "NO";
	
	return 0;
}
