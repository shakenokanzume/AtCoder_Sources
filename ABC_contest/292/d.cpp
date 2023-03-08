#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)
#define repp(i, n) for(int i = 1; i < n; i++)
const int lim = 1000000007;

using Graph = vector<vector<int>>;

vector<int> seen;  

// 各連結部分ごとの頂点数・変数を格納する変数
int n_p;
int n_v;

//dfs実装部分（prevは、前に辿ってきた頂点の番号）
void dfs(const Graph & G, int v, int prev){
    seen[v] = 1;
    n_p++;
    for(int nv : G[v]){
        // この位置では、次の頂点候補nvをすべて見るため、もれなく変数を計上できる
        n_v++;
        if(seen[nv] != -1) continue;
        dfs(G, nv, v);
    }
}
//dfs実装部分終わり

int main(){
    int N, M;
    cin >> N >> M;
    Graph G(N);

    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--, b--;
        if(a == b){
            G[a].push_back(b);
        }else{
            G[a].push_back(b);
            G[b].push_back(a);
        }
    }

    seen.assign(N, -1); //dfsする前に、すべての要素を-1で初期化する

    // グラフの探索を開始（初回は、頂点1から探索するが、BFSが終了して未探索の頂点があった場合は、その頂点を始点として再探索する。）
    rep(i, N){
        // 連結成分の頂点数・変数を初期化
        n_p = 0, n_v = 0;
        if(seen[i] == -1) dfs(G, i, -1);
        // 連結成分内の頂点数と変数が一致するかチェック
        if(n_p != n_v){
            cout << "start = " << i << " n_p = " << n_p << " n_v = " << n_v << endl;
            cout << "No" << endl;
            return 0;
        }
    }

    // すべての連結成分で、頂点数と変数が一致した場合のみ実行される
    cout << "Yes" << endl;

    return 0;
}