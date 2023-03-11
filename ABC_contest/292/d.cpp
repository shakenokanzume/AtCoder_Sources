#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

using Graph = vector<vector<int>>;

vector<int> seen;  

// 各連結部分ごとの頂点数・辺数を格納する変数
int n_p;
int n_v;
// 各頂点が持っている辺の数を格納しておく配列
vector<int> n_of_edge;

//dfs実装部分（prevは、前に辿ってきた頂点の番号）
void dfs(const Graph & G, int v){
    seen[v] = 1;
    // 連結成分の頂点数を加算（頂点vのぶん）
    n_p++;
    // 頂点vがもつ辺の数を、連結成分の辺の数として加算
    n_v += n_of_edge[v];

    for(int nv : G[v]){
        if(seen[nv] != -1) continue;
        dfs(G, nv);
    }
}
//dfs実装部分終わり

int main(){
    int N, M;
    cin >> N >> M;
    // n_of_edgeの要素数を作り直す
    n_of_edge.resize(N, 0);
    // グラフ構造を定義
    Graph G(N);

    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--, b--;
        // 連結状態を保存
        G[a].push_back(b);
        G[b].push_back(a);
        // 有向グラフとして扱ったときに、頂点が持つ辺の数を加算する
        n_of_edge[a]++;
    }

    seen.assign(N, -1); //dfsする前に、すべての要素を-1で初期化する

    // グラフの探索を開始（初回は、頂点1から探索するが、BFSが終了して未探索の頂点があった場合は、その頂点を始点として再探索する。）
    rep(i, N){
        // 連結成分の頂点数・変数を初期化
        n_p = 0, n_v = 0;
        if(seen[i] == -1) dfs(G, i);
        // 連結成分内の頂点数と変数が一致するかチェック
        if(n_p != n_v){
            cout << "No" << endl;
            return 0;
        }
    }

    // すべての連結成分で、頂点数と変数が一致した場合のみ実行される
    cout << "Yes" << endl;

    return 0;
}