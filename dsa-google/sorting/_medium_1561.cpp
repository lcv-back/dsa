#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	void quick_sort(vector<int>& arr, int low, int high){
		// base case
		if(low >= high) return;

		// partition
		int pivot = partition(arr, low, high);

		// repeat with the left side
		quick_sort(arr, low, pivot-1);

		// repeat with the right side
		quick_sort(arr, pivot+1, high);
	}

	int partition(vector<int>& arr, int start, int end){
		int pivot = arr[start];
		int i = start+1;
		int j = end;
		while(i <= j){
			while(i <= j && arr[i] <= pivot) i++;
			while(i <= j && arr[j] > pivot) j--;
			if(i < j){
				swap(arr[i], arr[j]);
			} 
		}

		int pivotIndex = j;
		swap(arr[start], arr[pivotIndex]);

		return pivotIndex;
	}

    int maxCoins(vector<int>& piles) {
        quick_sort(piles, 0, piles.size()-1);
        int numResult = piles.size() / 3;
        int sum = 0;
        // int[] temp = {0, 0, 0};
        for(int i = 0; i < numResult; i++){
        	piles.pop_back();
        	sum += piles[piles.size()-1];
        	piles.pop_back();
        }


        return sum; 
    }
};

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	Solution s;
	vector<int> piles = {9,8,7,6,5,1,2,3,4};
	cout << s.maxCoins(piles);
}