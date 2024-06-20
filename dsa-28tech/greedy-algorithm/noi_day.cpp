#include<bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>
using namespace std;

int main(){
    // greedy algorithm
    // use priority queue

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // priority_queue<int> Q; max_heap

    priority_queue<int, vector<int>, greater<int>> Q;
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        Q.push(x);
    }

    int ans = 0;

    while(Q.size() > 1){
        // chon 2 soi day co do dai ngan nhat
        int x = Q.top(); // do dai ngan nhat
        Q.pop();

        int y = Q.top(); // do dai ngan nhat tiep theo
        Q.pop();

        ans += x + y;
        Q.push(x+y);
    }        

    cout << ans << endl;

    // testcase
    // 5
    // 4 2 7 6 9
    // output: 62
    
    return 0;
}