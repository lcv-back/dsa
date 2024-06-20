#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    	unordered_set<char> jewelsSet(jewels.begin(), jewels.end());
    	int count = 0;
    	for(auto stone : stones){
    		if(jewelsSet.find(i) != jewelsSet.end()){
    			count++;
    		}
    	}
    	return count;
    }
};

int main(){
	string jewels = "aA";
	string stones = "aAAbbbb";
	Solution sol;
	cout << sol.numJewelsInStones(jewels, stones);
}