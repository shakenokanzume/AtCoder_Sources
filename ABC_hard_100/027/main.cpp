#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

//aからbへの双方向隣接リスト（木構造）
vector<vector<int>> graph;
//各頂点のカウンター
vector<int> counter;

void dfs(int v, int pre){
    //頂点vから他の頂点を探す前に、counterの値を更新
    if(pre != -1) counter[v] += counter[pre];
    //頂点vから他の頂点nvを探索
    for(int nv : graph[v]){
        //頂点vに来る前に通った頂点と、nvが一致する場合は飛ばす
        //（木の親に戻る必要はない）
        if(nv == pre) continue;
        //nvを基準にしたdfsを開始
        dfs(nv, v);
    }
}

int main(){
    int N, Q;
    cin >> N >> Q;
    //外部配列として呼び出しているので、要素数を指定してあげる
    graph.resize(N);
    counter.resize(N);
    rep(i, N-1){
        int a, b;
        cin >> a >> b;
        //入力では1~N頂点なので、配列で扱いやすいように、0~N-1頂点とした
        a--; b--;
        //グラフの情報を書き込む
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    rep(i, Q){
        int p, x;
        cin >> p >> x;
        //0-indexより
        p--;
        //指定された部分木の根の部分のカウンターを加算する
        counter[p] += x;
    }
    //dfs開始
    dfs(0, -1);

    rep(i, N) cout << counter[i] << " ";
    cout << endl;
    return 0;
}