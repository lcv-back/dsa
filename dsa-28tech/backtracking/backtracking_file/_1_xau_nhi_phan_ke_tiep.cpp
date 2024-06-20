#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int i = s.size()-1;
		while(i >= 0 && s[i]=='1'){
			s[i]='0';
			--i;
		}

		if(i>=0) s[i]='1';
		cout << s << endl;
	}
}