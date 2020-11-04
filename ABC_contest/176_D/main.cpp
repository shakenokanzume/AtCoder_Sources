#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    //各マスまでの到達コストの初期値を定義
    const int INF = pow(10, 9);
    //各マスからの移動方法を定義
    const vector<int> di = {-1, 0, 1, 0};
    const vector<int> dj = {0, -1, 0, 1};
    //入力
    int H, W;
    cin >> H >> W;
    int si, sj;
    int gi, gj;
    cin >> si >> sj;
    cin >> gi >> gj;
    //配列で扱うため、0-indexに直す
    si--; sj--; gi--; gj--;
    vector<string> s(H);
    rep(i, H) cin >> s[i];
    vector<vector<int>> dist(H, vector<int>(W, INF));
    //dequeのデータ構造を用意
    deque<pair<int, int>> q;
    //始点の情報を更新、dequeに格納
    dist[si][sj] = 0;
    q.emplace_back(si, sj);

    //01-BFS開始
    while(!q.empty()){
        //dequeから、探索開始点の情報を取得し、dequeから消去
        int i = q.front().first;
        int j = q.front().second;
        //探索開始点の距離情報を取得
        int d = dist[i][j];
        q.pop_front();
        //壁に邪魔されずに移動できる時の方法（縦横に1マスだけ動く場合の動き方）
        rep(v, 4){
            int ni = i + di[v];
            int nj = j + dj[v];
            if(ni >= H || nj >= W || ni < 0 || nj < 0) continue;
            if(s[ni][nj] == '#') continue;
            if(dist[ni][nj] <= d) continue;
            dist[ni][nj] = d;
            //dequeの先頭から入れる
            q.emplace_front(ni, nj);
        }
        //ワープを用いての移動の方法（周囲5x5マスに移動可能）
        for(int ei = -2; ei <= 2; ei++){
            for(int ej = -2; ej <= 2; ej++){
                int ni = i + ei;
                int nj = j + ej;
                if(ni >= H || nj >= W || ni < 0 || nj < 0) continue;
                if(s[ni][nj] == '#') continue;
                if(dist[ni][nj] <= d+1) continue;
                dist[ni][nj] = d+1;
                //dequeの末尾から入れる
                q.emplace_back(ni, nj);
            }
        }
    }
    int ans = dist[gi][gj];
    if(ans == INF) ans = -1;
    cout << ans << endl;
    return 0;
} 