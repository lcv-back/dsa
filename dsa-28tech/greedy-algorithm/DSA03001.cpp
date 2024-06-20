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
    
    vector<int> prices = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(t--){
		int n, ans = 0; cin >> n;
        for(int i=prices.size()-1; i>=0; i--){
            ans += n / prices[i];
            n %= prices[i];
        }

        cout << ans << "\n";
	}

	return 0;
}