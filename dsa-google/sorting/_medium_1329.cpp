#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& A) {
        int m = A.size(), n = A[0].size();
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> diag;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                diag[i - j].push(A[i][j]);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                A[i][j] = diag[i - j].top(), diag[i - j].pop();
        return A;
    }
};

int main(){
	vector<vector<int>> mat = {{3,3,1,1}, {2,2,1,2}, {1,1,1,2}};
	Solution sol;
	vector<vector<int>> res = sol.diagonalSort(mat);
	for(auto r : res){
		for(auto c : r){
			cout << c << " ";
		}
		cout << endl;
	}
}