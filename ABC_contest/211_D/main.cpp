#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

using Graph = vector<vector<int>>;

int main(){
    int N, M;
    cin >> N >> M;

    // 頂点１（プログラム状では頂点0）から頂点iまでの最短経路の数を格納する配列
    vector<int> path(N, 0);

    Graph G(N);
    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(N, -1);
    queue<int> que;

    dist[0] = 0;
    que.push(0);
    path[0] = 1;

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(int nv : G[v]){
            // 頂点nvをまだ探索していない場合
            if(dist[nv] == -1){
                dist[nv] = dist[v] + 1;
                que.push(nv);
                // 頂点0から頂点nvまでの最短経路の数は、頂点0から頂点vまでの最短経路の数と一致する
                path[nv] = path[v];
            }else if(dist[nv] == dist[v] + 1){
                // 頂点nvを探索済みで、かつ、dist[nv] == dist[v] + 1 のとき
                // 頂点0から頂点nvまでの最短経路の数に、頂点0から頂点vまでの最短経路の数が加えられる
                path[nv] += path[v];
                path[nv] %= lim;
            }
        }
    }

    cout << path[N-1] << endl;
    return 0;
}