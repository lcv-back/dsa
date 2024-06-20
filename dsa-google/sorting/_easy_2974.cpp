#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void quick_sort(vector<int>& arr, int low, int high) {
		// base case
		if(low >= high) return;

		// partition
		int pivot = partition(arr, low, high);

		// repeat for the left side
		quick_sort(arr, low, pivot-1);

		// repeat for the right side
		quick_sort(arr, pivot+1, high);
	}

	int partition(vector<int>& arr, int start, int end){
		int pivot = arr[start];
		int i = start+1;
		int j = end;
		while(i <= j){
			while(i <= j && arr[i] <= pivot) i++;
			while(i <= j && arr[j] > pivot) j--;
			if(i < j) {
				swap(arr[i], arr[j]);
			}
		}

		int pivotIndex = j;
		swap(arr[start], arr[pivotIndex]);

		return pivotIndex;
	}

    vector<int> numberGame(vector<int>& nums) {
    	quick_sort(nums, 0, nums.size()-1);
  		vector<int> res;
  		for(int i = 0; i < nums.size(); i++){
  			if(i % 2 == 0){
  				swap(nums[i], nums[i+1]);
  			} else{
  				continue;
  			}
  		}
  		return nums;      
    }
};

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	Solution s;
	vector<int> nums = {5,4,2,3};
	vector<int> res = s.numberGame(nums);
	for(int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
	}
	
}