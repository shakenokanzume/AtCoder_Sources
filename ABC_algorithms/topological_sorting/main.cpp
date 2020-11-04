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

vector<int> seen; //各頂点を見た順番を、戻り順で格納する
int seen_num = 0; //各頂点を見た順番を、戻り順で格納するために、今何番目かを記憶しておく変数
vector<int> flow; //頂点のながれ（上下関係）を格納する

//dfs実装部分
void dfs(const Graph & G, int v){
    for(int nv : G[v]){
        if(seen[nv] != -1) continue;
        dfs(G, nv);
    }
    seen[v] = seen_num; //seenに値を格納するのは、そのdfs関数が終わる（親頂点に戻る）時。
    seen_num++;
    flow.push_back(v);
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
    }

    seen.assign(N, -1); //dfsする前に、すべての要素を-1で初期化する
    dfs(G, 0); //dfsの再帰関数の開始

    rep(i, N){ //まだ探索してない頂点がある可能性があるので、その場合は、その頂点を始点としたトポロジカルソーティングを行う
        if(seen[i] == -1) dfs(G, i);
    }

    rep(i, N){ //頂点の上下関係（グラフの矢印の向き）の順に表示（これは、戻り順と一致する）
        cout << flow[i] << " ";
    }
    cout << endl;
    return 0;
}