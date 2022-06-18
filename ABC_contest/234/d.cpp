#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n, k; cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    // 与えられる配列Pのうち、最初のk-1項文をpriority_queueに入れる
    rep(i, k-1) pq.push(p[i]);
    for(int i = k-1; i < n; i++){
        int kth_val = pq.top();
        int ans;
        if(p[i] > kth_val){
            pq.pop();
            pq.push(p[i]);
            ans = pq.top();
        }else ans = kth_val;

        cout << ans << endl;
    }
    return 0;
}