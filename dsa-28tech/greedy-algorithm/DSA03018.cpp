#include<bits/stdc++.h>
using namespace std;

void solve(int n){
	for(int b=n/7; b >= 0; b--){
		int remain = n-7 * b;
		if(remain % 4 == 0){
			int a = remain / 4;
			cout << string(a, '4');
			cout << string(b, '7');
			return;
		}
	}
	cout << "-1";
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		// 4a + 7b = n
		solve(n);
		cout << endl;
	}

	return 0;
}