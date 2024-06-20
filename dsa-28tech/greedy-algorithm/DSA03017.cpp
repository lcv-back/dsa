#include<bits/stdc++.h>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; cin >> t;
    while(t--){
        // input
        int k; cin >> k;
        string s; cin >> s;
        map<char, int> mp;
        priority_queue<int> Q;

        // pre-process
        for(char x : s) mp[x]++;
        for(auto it : mp) Q.push(it.second);

        // process
        while(k--){
            int tmp = Q.top();
            Q.pop();

            tmp--;
            Q.push(max(tmp, 0)); // if k > s.size() then size of map is negative
        }

        auto ans = 0;

        while(!Q.empty()){
            ans += Q.top() * Q.top();
            Q.pop();
        }

        cout << ans << "\n";
    }
}