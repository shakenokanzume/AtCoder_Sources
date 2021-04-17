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

//dfs実装部分
// 第3引数はデフォルト引数
// デフォルト引数で、その頂点の前の頂点（以下、親とよぶ）から来たことを示すことで、木の逆流を防ぐ
void dfs(const Graph &G, int v, int p = -1){
    seen[v] = true; //seenをtrueにするのは、その頂点が探索の始点となった時

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
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false); //dfsする前に、すべての頂点について、未探索状態であることを表す。
    dfs(G, 0); //dfsの再帰関数の開始
    return 0;
}