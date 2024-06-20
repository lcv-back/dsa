#include<bits/stdc++.h>
using namespace std;

int n, k, a[1005];

void generate(){
	int i = k;
	while(i >= 1 && a[i] == n-k+i) --i;

	if(i == 0) // example: 1111...
		for(int i=1; i <= k; i++)
			a[i] = i;

	else { // example: 1011..
		a[i]++;
		for(int j = i+1; j <= k; j++){
			a[j]=a[j-1]+1;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int t; cin >> t;

	while(t--){
		// INPUT---------
		cin >> n >> k;
		for(int i=1; i<=k; i++) cin >> a[i];
		// --------------

		generate();	

		// PRINT---------
		for(int i=1; i<=k;i++) cout << a[i] << " ";
		cout << endl;
	}
}