#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

// DFSで使う配列をグローバルで宣言
vector<vector<int>> g;
vector<int> cnt(100005, 0);
vector<int> ans;
vector<int> c;

// dfsの記述
// 第2引数はデフォルト引数で、その頂点の前の頂点を入れることで、逆戻りしないようにする
void dfs(int v, int p = -1){
    // その頂点までの色情報をチェックし、いい頂点であればその頂点番号をansに格納する。
    if(cnt[c[v]] == 0) ans.push_back(v+1);
    // 現在の頂点の色情報をcntに入力
    cnt[c[v]]++;
    // 周辺頂点の探索
    for(int nv : g[v]){
        if(nv == p) continue;
        dfs(nv, v);
    }
    cnt[c[v]]--;
}

int main(){
    int N;
    cin >> N;
    c.resize(N);
    rep(i, N) cin >> c[i];
    g.resize(N);
    rep(i, N-1){
        int a, b;
        cin >> a >> b;
        a--, b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(0);

    // 昇順に出力するため、ソート
    sort(ans.begin(), ans.end());
    // 出力
    for(auto a : ans) cout << a << endl;
    return 0;
}