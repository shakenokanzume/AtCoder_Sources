#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;
const int INF = 1000000000;

int main(){
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    rep(i, H) cin >> S[i];

    //移動するときの単位を定義
    //右・下・左・上の順番
    const vector<int> di = {1, 0, -1, 0};
    const vector<int> dj = {0, 1, 0, -1};

    //最長経路の長さを取得
    int mx = 0;
    rep(i, H){
        rep(j, W){
            //開始点が壁の時はやめる
            if(S[i][j] == '#') continue;
            //BFSで用いるqueue
            queue<pair<int, int>> q;
            //始点(i, j)からの経路長を格納する2次元配列
            vector<vector<int>> dist(H, vector<int>(W, INF));
            //情報の更新関数
            if(dist[i][j] != INF) continue;
            dist[i][j] = 0;
            q.emplace(i, j);
            
            //BFS開始
            while(!q.empty()){
                int vi = q.front().first;
                int vj = q.front().second;
                q.pop();

                //上下左右への移動
                rep(dir, 4){
                    int nvi = vi + di[dir];
                    int nvj = vj + dj[dir];
                    //終了条件
                    if(nvi < 0 || nvj < 0 || nvi >= H || nvj >= W) continue;
                    if(S[nvi][nvj] == '#') continue;
                    //発見した場所のdist更新
                    if(dist[nvi][nvj] != INF) continue;
                    dist[nvi][nvj] = dist[vi][vj] + 1;
                    q.emplace(nvi, nvj);
                }
            }
            rep(vi, H){
                rep(vj, W){
                    if(dist[vi][vj] == INF) continue;
                    mx = max(mx, dist[vi][vj]);
                }
            }
        }
    }
    cout << mx << endl;
    return 0;
}