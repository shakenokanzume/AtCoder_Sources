#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

// 使用する各変数の宣言
int n, m;
long long int T;
// 使用するグラフの構造を宣言
using Graph = vector<priority_queue<pair<int, int>>>;
// 各地点の探索状況を格納する配列の宣言
// 地点vに到達していなければ、track[v]=-1（vは1始まりでカウントしている）
// 到達したときに、その時の時刻を入力する
vector<int> track;
// 通過した頂点の番号を順番に格納する配列
vector<int> chain;
// 回答となる地点番号
int ans = -1;

// 深さ優先探索を行う再帰関数
// 引数vは現在位置している地点番号が入力される
// 引数timeは、現在の時刻が入力される。
void dfs(const Graph &G, int v, int time){
    // 現在の時刻がTと一致していた場合、現在Kさんがいる地点の番号を出力
    if(time == T){
        ans = v;
        return;
    }

    // 以下、時刻がTに達していない時の処理-----------------------------------

    // 一度通った地点に戻ってきた場合
    if (track[v] != -1)
    {
        // circleは、与えられたグラフにおいて、循環経路となっている部分で1周するのに必要な時刻
        int circle = time - track[v];
        // 時刻TでKさんがいる地点の、循環経路の開始点（最も早い時刻に通過した、循環経路状の地点）
        // からの距離（循環経路の開始点から、その地点まで行くのに必要な時間）
        int val = (T - track[v]) % circle;
        // 時刻TでKさんがいる地点の番号を求める
        ans = chain[track[v] + val];
        return;
    }
    else // 初めてその地点を通る場合
    { 
        track[v] = time;
        chain.push_back(v);
    }

    // 次の時刻に向かう地点を探索
    // 現在の地点から行ける地点がない場合
    if(G[v].empty()){
        ans = v;
        return;
    }
    // 現在の地点から行ける地点がある場合
    pair<int, int> nv = G[v].top();
    dfs(G, nv.second, time+1);
}

int main(int argc, char *argv[])
{
    // このコードは標準入力と標準出力を用いたサンプルコードです。
    // このコードは好きなように編集・削除してもらって構いません。
    // ---
    // This is a sample code to use stdin and stdout.
    // Edit and remove this code as you like.

    // 各変数の入力
    cin >> n >> m;
    cin >> T;

    // グラフを記述する配列の準備
    Graph G(n+1);
    for(int i = 1; i < m+1; i++){
        int u, v, w;
        cin >> u >> v >> w;
        // グラフに情報入力（カレー臭の大きい順番にソートしたいため、(w, v)の順で格納）
        G[u].push(make_pair(w, v));
    }

    // 各地点に初めて到達した時刻を格納する配列の定義
    // 最初は全ての地点に到達していないため、-1を代入しておく
    track.assign(n+1, -1);
    // 地点1から深さ優先探索開始
    dfs(G, 1, 0);

    cout << ans << endl;
    return 0;
}