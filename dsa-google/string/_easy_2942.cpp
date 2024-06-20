#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
    	vector<int> res;

        for(int i = 0; i < words.size(); i++){
        	if(words[i].find(x) != string::npos){
        		res.push_back(i);
        	}
        }
        return res;
    }
};

int main(){
	vector<string> words = {"abc","bcd","aaaa","cbc"};
	char x = 'a';
	Solution sol;
	vector<int> res = sol.findWordsContaining(words, x);
	for(auto i : res){
		cout << i << " ";
	} 
}