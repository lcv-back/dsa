#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int cnt = 0;
		unordered_map<char, int> map;

		for (int i = 0; i < t.size(); ++i) {
        	map[t[i]] = i;
    	}

		for(int i = 0; i < s.size(); i++){
			int idx = map[s[i]];
			cnt += abs((i - idx));
		}
		return cnt;
    }
};

int main(){
	string s = "abc";
	string t = "bac";
	Solution sol;
	cout << sol.findPermutationDifference(s, t);
}
