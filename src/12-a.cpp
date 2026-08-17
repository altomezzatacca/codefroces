#include "bits/stdc++.h"
using namespace std;
 
int main(){
	
	char mat[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> mat[i][j];
		}
	}
	
	bool b = true;
	
	for(int i = 0; i < 3; i++){
		if (mat[i][0] != mat[2-i][2]){
			b = 0;
			break;
		}
	}
	if(mat[0][1]!=mat[2][1]) b = 0;
	
	cout << (b ? "YES" : "NO");
	
	return 0;
}
