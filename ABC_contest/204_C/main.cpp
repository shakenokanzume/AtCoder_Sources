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
    int N, M; //頂点の個数がN, 辺の数がM
    cin >> N >> M;
    Graph G(N); //G[i]に頂点iに隣接する頂点番号を追加していくvector2次元配列
    rep(i, M)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
    }

    int ans = 0; // すべての経路の個数

    rep(i, N)
    {
        vector<int> dist(N, -1); //始点（今回は頂点0）からの距離（何ステップで来れるか）を格納、最初はすべてに-1を格納
                                 //-1が格納されている番号の頂点は、まだ発見されていないことを表す
        queue<int> que;          //発見済み、かつ、未探索の頂点をキュー構造に格納する

        dist[i] = 0; //始点はi番の頂点なので、0番の頂点へは、0ステップで移動可能
        que.push(i); //始点はiなので、はじめに0を格納

        ans++; // 各頂点において、距離0の旅の分を格納

        while (!que.empty())
        {
            int v = que.front(); //queの先頭に入っている要素を取り出す
            que.pop();           //queの先頭の要素（先ほど取り出したもの）をqueから削除

            for (int nv : G[v])
            { //頂点vに隣接している頂点番号を、nvに代入しながら探索
                if (dist[nv] != -1)
                    continue; //dist[nv] != -1の時は、すでに発見済みなので、無視

                dist[nv] = dist[v] + 1; //未発見の頂点があった場合は、dist[nv]の値を更新し、queの後ろに加える
                que.push(nv);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}