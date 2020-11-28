#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

using Graph = vector<vector<int>>;

vector<bool> seen; //その頂点を探索済みかどうかを格納する配列

//dfs実装部分
void dfs(const Graph &G, int v, int &res)
{
    bool end = true; // 終端まで到達しているかを確認するための変数（とりあえず終端に到達しているとする）4
    // 各頂点を回っているかを確認する
    for(int i = 0; i < seen.size(); i++){
        // 各頂点のseen[i]のbool値から、すでに通過しているかどうかをチェック
        // i == v のときは、今らか探索する（seen[i]==trueとする）ので、!seen[i]だとしても、if文内の操作は行わない
        if(!seen[i] && i != v) end = false;
    }
    if (end)
    {
        res++;
        return;
    }

    // 各頂点での処理
    // 頂点に到達したときに、seen[v]をtrueに（探索済みに）する
    seen[v] = true;
    for(auto nv : G[v]){
        if(seen[nv]) continue;
        dfs(G, nv, res);
    }
    // 頂点に戻ってきた後に（再帰関数の実行後に）seen[v]をfalseに（未探索に）する
    seen[v] = false;
}
//dfs実装部分終わり

int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N);
    rep(i, M)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false); //dfsする前に、すべての頂点について、未探索状態であることを表す。
    int res = 0;           // 始点が1で、すべての頂点を1度のみ訪れるパスが何本あるかを格納する
    dfs(G, 0, res);             //dfsの再帰関数の開始
    cout << res << endl;
    return 0;
}