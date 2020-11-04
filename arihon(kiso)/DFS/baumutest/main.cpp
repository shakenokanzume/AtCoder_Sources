#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

using Graph = vector<vector<int>>;
vector<bool> seen;
bool is;

void dfs(Graph G, int v, int from){
    seen[v] = true;
    for (auto nv : G[v]){
        if(nv == from){
            continue;
        }
        if(seen[nv]){
            is = false;
            continue;
        }
        dfs(G, nv, v);
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    Graph G(N);
    seen.assign(N, false);
    int ans = 0;

    rep(i, M){
        int v1, v2;
        cin >> v1 >> v2;
        v1--, v2--;
        G[v1].push_back(v2);
        G[v2].push_back(v1);
    }

    rep(i, N){
        if(seen[i]) continue;
        //今から見るグラフの構造が木であるかどうかを判別する
        is = true;
        dfs(G, i, -1);
        if(is) ans++;
    }
    cout << ans << endl;
    return 0;
}