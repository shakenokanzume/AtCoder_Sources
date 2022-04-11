#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int main(){
    int n, q; cin >> n >> q;
    vector<vector<int>> c(n);
    rep(i, n-1){
        int a, b; cin >> a >> b;
        a--, b--;
        c[a].push_back(b);
        c[b].push_back(a);
    }
    vector<pair<int, int>> pr;
    rep(i, q){
        int c, d; cin >> c >> d;
        c--, d--;
        pr.emplace_back(c, d);
    }

    vector<int> dist(n, -1);
    queue<int> que;
    // 任意に決定した頂点0（これを木の根とする）から、各頂点までの距離を求める
    dist[0] = 0;
    que.push(0);

    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : c[v]){
            if(dist[nv] != -1) continue;
            que.push(nv);
            dist[nv] = dist[v] + 1;
        }
    }

    // 頂点C, D間の距離を求める
    rep(i, q){
        if((dist[pr[i].first] + dist[pr[i].second]) % 2 == 0) cout << "Town" << endl;
        else cout << "Road" << endl;
    }
    return 0;
}