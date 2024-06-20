#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t; cin >> t;
	while(t--){
		int n; cin >> n; // length of give array
		int a[n]; // given array
		for(int i=0; i<n; i++) cin >> a[i]; // values

		sort(a, a+n);
		int x=0, y=0;

		for(int i=0; i<n; i += 2) x = x * 10 + a[i];
		for(int i=1; i<n; i += 2) y = y * 10 + a[i];

		cout << x + y << endl;
	}

	return 0;
}

/*
Testcase
2
6
6 8 4 5 2 3
5
5 3 0 7 4

Output
604
82

*/