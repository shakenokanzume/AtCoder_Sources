#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

//グラフ、頂点探索済判定配列、連結グラフ内の頂点数カウント変数の宣言
vector<vector<int>> graph;
vector<bool> seen;
int cnt;

//dfs実装部分
void dfs(int v){
    seen[v] = true;
    //dfsが呼び出されるごとに、cntをインクリメント
    //dfsは、1つの頂点に対して1回呼び出される。
    cnt++;
    for(int nv : graph[v]){
        if(seen[nv]) continue;
        dfs(nv);
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    graph.resize(N);
    seen.assign(N, false);

    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int mx = 0;
    rep(i, N){
        //グラフ全体としては、非連結グラフになる可能性が十分に存在する
        //そのため、まだ探索していない頂点がある場合は、その頂点を開始点としてdfsを開始する
        if(!seen[i]){
            //連結グラフごとにcntは初期化して0にしておく
            cnt = 0;
            dfs(i);
            //頂点数が一番多い連結グラフの頂点数を格納する
            mx = max(mx, cnt);
        }
    }
    cout << mx << endl;
    return 0;
}