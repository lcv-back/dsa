#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int n, x[100], ok;

	vector<vector<int>> subsets(vector<int>& nums){
		vector<vector<int>> res;
		n=nums.size();
		ok=true;

		while(ok){
			vector<int> temp;
			for(int i=0;i<n;i++){
				if(x[i]==1) temp.push_back(nums[i]);
			}
			res.push_back(temp);
			generate();
		}
		return res;
	}

	void init(){
		for(int i=0;i<n;i++) x[i]=0;
	}

	void generate(){
		int i=n-1;
		while(i>=0 && x[i]==1){
			x[i]=0;
			i--;
		}
		if(i<0) ok=false;
		else x[i]=1;
	}
};

int main(){
	vector<int> nums = {1,2,3};
	Solution sol;
	auto res = sol.subsets(nums);
	for(auto& r : res){
		for(auto& c : r){
			cout << c << " ";
		}
		cout << endl;
	}
}