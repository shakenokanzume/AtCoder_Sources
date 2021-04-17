#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

using Graph = vector<vector<int>>;
//頂点i(i = 0, 1, ... , n-1)に隣接している頂点の番号を、Graph[i]に
//すべて格納していくようにして、隣接リストをvectorで表現している。

int main()
{
    int N;
    cin >> N;
    vector<int> c(N);
    rep(i, N) cin >> c[i];
    Graph G(N); //G[i]に頂点iに隣接する頂点番号を追加していくvector2次元配列
    rep(i, N)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b); //無効グラフの場合、a, bどちらからも双方に移動可能であるため、G[a], G[b]にお互いの番号を格納
        G[b].push_back(a);
    }
    vector<int> dist(N, -1); //始点（今回は頂点0）からの距離（何ステップで来れるか）を格納、最初はすべてに-1を格納
                             //-1が格納されている番号の頂点は、まだ発見されていないことを表す
    queue<int> que;          //発見済み、かつ、未探索の頂点をキュー構造に格納する

    // 頂点1から各頂点までの最短距離の間に出現した色を格納する配列
    vector<set<int>> st(N);

    // 答えの頂点番号を記録する配列
    vector<int> ans;

    dist[0] = 0; //始点は0番の頂点なので、0番の頂点へは、0ステップで移動可能
    que.push(0); //始点は0なので、はじめに0を格納

    while (!que.empty())
    {
        int v = que.front(); //queの先頭に入っている要素を取り出す
        que.pop();           //queの先頭の要素（先ほど取り出したもの）をqueから削除

        if(st[v].count(c[v]) == 0){
            ans.push_back(v+1);
        }

        for (int nv : G[v])
        { //頂点vに隣接している頂点番号を、nvに代入しながら探索
            if (dist[nv] != -1)
                continue; //dist[nv] != -1の時は、すでに発見済みなので、無視

            dist[nv] = dist[v] + 1; //未発見の頂点があった場合は、dist[nv]の値を更新し、queの後ろに加える
            que.push(nv);
            // 前の頂点までで出現した色の種類を格納する
            st[nv].emplace(st[v]);
            st[nv].insert(c[v]);
        }
    }
    // 答えの出力
    for(auto p : ans){
        cout << p << endl;
    }
    return 0;
}