#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

const int lim = 1000000007;

const vector<int> di = {-1, 0, 1, 0};
const vector<int> dj = {0, 1, 0, -1};

int main()
{
    int H, W;
    cin >> H >> W;
    int si, sj, gi, gj;
    deque<pair<int, int>> q;
    //その地点までの最小コスト距離（今回のコストは、コスト0の移動とコスト1の移動）
    vector<vector<int>> dist(H, vector<int>(W, -1));
    vector<vector<char>> c(H, vector<char>(W));
    rep(i, H){
        rep(j, W){
            cin >> c[i][j];
            if(c[i][j] == 's'){
                si = i, sj = j;
            }
            if(c[i][j] == 'g'){
                gi = i, gj = j;
            }
        }
    }

    q.emplace_front(si, sj);
    dist[si][sj] = 0;
    while(!q.empty()){
        pair<int, int> v = q.front();
        q.pop_front();
        int vi = v.first;
        int vj = v.second;
        //移動処理（隣接発見処理）
        rep(i, 4){
            int ni = vi + di[i];
            int nj = vj + dj[i];
            if(ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
            if(dist[ni][nj] != -1) continue;
            //コスト1での移動
            if(c[ni][nj] == '#'){
                dist[ni][nj] = dist[vi][vj]+1;
                q.emplace_back(ni, nj);
            }else{
                //コスト0での移動
                dist[ni][nj] = dist[vi][vj];
                q.emplace_front(ni, nj);
            }
        }
    }
    if(dist[gi][gj] != -1 && dist[gi][gj] <= 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}