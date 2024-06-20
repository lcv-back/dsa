#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    	vector<vector<int>> res;
    	init(nums.size());
    	while(check() == false){
    		res.push_back()
		}
    }
private:
	void init(int len){
		vector<int> a;
		for(int i = 1; i <= len; i++){
			a[i] = 0;
		}
	}
	
	bool check(int len, vector<int> a){
		for(int i = 1; i <= len; i++){
			if(a[i] == 0) return false;
		}
		return true;
	}
	
	void generate(int len, int[] a){
		int i = len;
		while(i >= 1 && a[i] == 1){
			a[i] = 0;
			i--;
		}
		x[i] = 1;
	}
};

int main(){
	int[] nums = {1,2,3};
	Solution sol;
	vector<vector<int>> res = sol.subsets(nums);
	for(auto r : subsets){
		for(auto c : r){
			cout << c << " ";
		}
		cout << endl;
	}
	return 0;
}
