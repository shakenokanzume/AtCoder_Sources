#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

//移動方法
const vector<int> di = {-1, 0, 1, 0};
const vector<int> dj = {0, 1, 0, -1};

int main(){
    //各種入力
    int H, W, N;
    cin >> H >> W >> N;
    vector<vector<char>> c(H, vector<char>(W));
    int si, sj;
    rep(i, H){
        rep(j, W){
            cin >> c[i][j];
            //スタートの座標を探す
            if(c[i][j] == 'S'){
                si = i, sj = j;
            }
        }
    }

    //目標達成までの移動距離を格納
    int ans = 0;
    //硬さが(i+1)のチーズをゴールに設定するforループ
    rep(i, N){
        //ループごとにdistとqは新調する
        vector<vector<int>> dist(H, vector<int>(W, -1));
        queue<pair<int, int>> q;
        //スタート地点のdistの更新とqueへの追加
        q.emplace(si, sj);
        dist[si][sj] = 0;
        //dfs開始
        while(!q.empty()){
            pair<int, int> v;
            v = q.front();
            q.pop();
            int vi, vj;
            vi = v.first, vj = v.second;
            rep(k, 4){
                int ni = vi + di[k];
                int nj = vj + dj[k];
                if(ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
                if(c[ni][nj] == 'X') continue;
                if(dist[ni][nj] != -1) continue;
                dist[ni][nj] = dist[vi][vj] + 1;
                //ゴールについた時の処理
                if((c[ni][nj] - '0') == (i + 1)){
                    ans += dist[ni][nj];
                    si = ni, sj = nj;
                    //一応queの中身を空にしてからbreakする
                    while(!q.empty()) q.pop();
                    break;
                }
                q.emplace(ni, nj);
            }

        }
    }
    cout << ans << endl;
    return 0;
}