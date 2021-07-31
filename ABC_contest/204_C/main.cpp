#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

using Graph = vector<vector<int>>;
vector<bool> seen; //その頂点を探索済みかどうかを格納する
ll cnt; // 頂点iからのdfsでたどり着ける頂点数を記録
ll ans;

//dfs実装部分
// 第3引数はデフォルト引数
// デフォルト引数で、その頂点の前の頂点（以下、親とよぶ）から来たことを示すことで、木の逆流を防ぐ
void dfs(const Graph &G, int v, int p = -1){
    seen[v] = true; //seenをtrueにするのは、その頂点が探索の始点となった時
    ans += cnt;
    cnt++;

    for(int nv : G[v]){
        if(nv == p) continue;
        if(seen[nv] == true) continue;
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
        G[a].push_back(b);
    }

    seen.assign(N, false); //dfsする前に、すべての頂点について、未探索状態であることを表す。
    ans = N;

    // スタートする頂点を変えながら行う
    rep(i, N){
        cnt = 0;
        dfs(G, i); //dfsの再帰関数の開始
    }
    cout << ans << endl;
    return 0;
}