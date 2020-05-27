#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int t;
	int a[100], b[100], res = 0;
	memset(a, 0, sizeof(a));
	for(int i = 0; i < n; i++){
		t = 1;
		for(int j = 0; j < n; j++){
			t += a[j];
			res = t;
			if(j == 0){
				b[0] = 0;
			} else{
				b[j] = res;
			}
		}
		for(int k = 0; k < n; k++){
			a[k] = b[k];
		}
	}
	cout << res << "\n";
	return 0;
}