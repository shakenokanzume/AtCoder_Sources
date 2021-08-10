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
vector<int> path; // たどった経路を格納

//dfs実装部分
// 第3引数はデフォルト引数
// デフォルト引数で、その頂点の前の頂点（以下、親とよぶ）から来たことを示すことで、木の逆流を防ぐ
void dfs(const Graph &G, int v, int p = -1){
    seen[v] = true; //seenをtrueにするのは、その頂点が探索の始点となった時
    path.push_back(v+1);
    
    for(int nv : G[v]){
        if(nv == p) continue;
        if(seen[nv] == true) continue;
        dfs(G, nv, v);
        path.push_back(v+1);
    }
}
//dfs実装部分終わり

int main(){
    int N;
    cin >> N;
    Graph G(N);
    rep(i, N-1){
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // ある頂点から繋がっている頂点の情報を、昇順に並び替える
    rep(i, N){
        sort(G[i].begin(), G[i].end());
    }

    seen.assign(N, false); //dfsする前に、すべての頂点について、未探索状態であることを表す。
    dfs(G, 0); //dfsの再帰関数の開始
    rep(i, (int)path.size()){
        cout << path[i] << endl;
    }
    return 0;
}