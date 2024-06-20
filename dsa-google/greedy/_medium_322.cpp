#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    	int ans = 0;
    	sort(coins.begin(), coins.end());
        for(int i=coins.size()-1; i >= 0; i--){
        	ans += amount / coins[i];
        	amount %= coins[i];
        }

        if(ans == 0 && amount > 0) return -1;
        return ans;
    }
};

int main(){
	Solution sol;
	vector<int> coins = {1,2,5};
	int amount = 11;
	cout << sol.coinChange(coins, amount);
}