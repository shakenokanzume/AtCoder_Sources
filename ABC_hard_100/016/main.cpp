#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

//頂点aから頂点bまで向かうのにかかるコスト（距離）
//ただし、道が1本道の場合のみ(X-Yの短縮経路を用いない場合の経路の長さを得る)
int cost(int a, int b){
    int c = fabs(b - a);
    return c;
}

int main(){
    int N, X, Y;
    cin >> N >> X >> Y;
    //graphで頂点情報を0-indexで扱うため、X, Yをディクリメント
    X--; Y--;
    //頂点iから頂点jへの最短コストを(i, j)に格納する
    vector<vector<int>> graph(N, vector<int>(N, 0));
    rep(i, N){
        rep(j, N){
            //cost(i, j)で、短縮経路X-Yを使わない場合の最小コストを
            //cist(i, X) + cost(j, Y) + 1 で、短縮経路X-Yを用いた場合の最小コストを
            //それぞれ出し、2つのうち小さいほうを選択する
            graph[i][j] = min(cost(i, j), cost(i, X) + cost(j, Y) + 1);
        }
    }
    
    //コストk(k=1, 2, ...)で移動できる頂点の組み合わせを数える
    vector<int> cnt(N);
    rep(i, N){
        for(int j = i; j < N; j++){
            cnt[graph[i][j]]++;
        }
    }
    //出力
    for(int i = 1; i < N; i++) cout << cnt[i] << endl;
    return 0;
}