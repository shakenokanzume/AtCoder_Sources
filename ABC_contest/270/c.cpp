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
#define rep(i, n) for(int i = 0; i < n; i++)

using Graph = vector<vector<int>>;
//頂点i(i = 0, 1, ... , n-1)に隣接している頂点の番号を、Graph[i]に
//すべて格納していくようにして、隣接リストをvectorで表現している。

int main(){
    int N, X, Y;
    cin >> N >> X >> Y;
    Graph G(N);
    rep(i, N-1){
        int a, b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a); 
    }
    // i番目の頂点に到達したとき、前にいた頂点の番号を格納しておく。
    vector<int> dist(N, -1);
    queue<int> que;

    // スタートの頂点は-2を格納
    dist[X-1] = -2;
    que.push(X-1);

    while(!que.empty()){
        int v = que.front();
        que.pop();

        for(int nv : G[v]){ //頂点vに隣接している頂点番号を、nvに代入しながら探索
            if(dist[nv] != -1) continue;

            // 前にいた頂点番号を格納
            dist[nv] = v+1;
            que.push(nv);
        }
    }

    vector<int> array;
    array.push_back(Y);
    int c = Y;
    while(c != -2){
        array.push_back(dist[c]);
        c = dist[c];
    }
    reverse(array.begin(), array.end());
    for(auto p : array) cout << p << endl;
    return 0;
}