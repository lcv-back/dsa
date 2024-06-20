#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        // Tạo mảng đếm tần suất cho mỗi ký tự
        int cnt[256] = {0};
        for(char c : s){
            cnt[c]++;
        }

        // Tạo vector các cặp (tần suất, ký tự)
        vector<pair<int, char>> freq;
        for(int i = 0; i < 256; i++){
            if(cnt[i] > 0){
                freq.push_back({cnt[i], (char)i});
            }
        }

        // Sắp xếp vector dựa trên tần suất (giảm dần)
        sort(freq.begin(), freq.end(), greater<pair<int, char>>());

        // Xây dựng chuỗi kết quả
        string res = "";
        for(auto& p : freq){
            res.append(p.first, p.second);
        }

        return res;
    }
};

int main(){
    string s = "tree";
    Solution sol;
    cout << sol.frequencySort(s);
    return 0;
}
