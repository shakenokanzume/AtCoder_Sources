#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

using Graph = vector<vector<int>>;
//頂点i(i = 0, 1, ... , n-1)に隣接している頂点の番号を、Graph[i]に
//すべて格納していくようにして、隣接リストをvectorで表現している。

int main(){
    int N, M; //頂点の個数がN, 辺の数がM
    cin >> N >> M;
    Graph G(N); //G[i]に頂点iに隣接する頂点番号を追加していくvector2次元配列
    rep(i, M){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b); //無効グラフの場合、a, bどちらからも双方に移動可能であるため、G[a], G[b]にお互いの番号を格納
        G[b].push_back(a); 
    }
    vector<bool> seen(N, false); //その頂点が発見済みか未発見かを格納、falseの時に未発見
    stack<int> s; //発見されていて、かつ未探索の頂点番号をスタックに格納する
    
    seen[0] = true; //始点は発見済みとする
    s.push(0); //始点は0なので、はじめに0を格納

    while(!s.empty()){
        int v = s.top(); //stackの一番上に入っている要素を取り出す
        s.pop(); //stackの一番上の要素（先ほど取り出したもの）をstackから削除

        for(int nv : G[v]){ //頂点vに隣接している頂点番号を、nvに代入しながら探索
            if(seen[nv] == true) continue; //dist[nv] != -1の時は、すでに発見済みなので、無視
            seen[nv] = true;
            s.push(nv);
        }
    }
    return 0;
}