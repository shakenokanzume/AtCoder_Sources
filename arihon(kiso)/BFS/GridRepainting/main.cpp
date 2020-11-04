#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

const vector<int> di = {-1, 0, 1, 0};
const vector<int> dj = {0, 1, 0, -1};

int main()
{
    int H, W;
    cin >> H >> W;
    int si = 0, sj = 0;
    int gi = H-1, gj = W-1;
    queue<pair<int, int>> q;
    vector<vector<int>> dist(H, vector<int>(W, -1));
    vector<vector<char>> c(H, vector<char>(W));
    //初期状態での黒マスの個数
    int b_cnt = 0;
    rep(i, H){
        rep(j, W){
            cin >> c[i][j];
            if(c[i][j] == '#') b_cnt++;
        }
    }
    //startからgoalまでの最短経路長
    int ans = -1;

    dist[si][sj] = 0;
    q.emplace(si, sj);
    while (!q.empty())
    {
        pair<int, int> v;
        v = q.front();
        q.pop();
        int vi, vj;
        vi = v.first, vj = v.second;
        //ゴール時処理
        if(vi == gi && vj == gj){
            ans = dist[vi][vj];
            break;
        }

        rep(i, 4)
        {
            int ni = vi + di[i];
            int nj = vj + dj[i];
            if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                continue;
            if (c[ni][nj] == '#')
                continue;
            if (dist[ni][nj] != -1)
                continue;
            dist[ni][nj] = dist[vi][vj] + 1;
            q.emplace(ni, nj);
        }
    }
    if(ans == -1) cout << -1 << endl;
    else{
        int route_panel_cnt = ans + 1;
        cout << H*W - (route_panel_cnt + b_cnt) << endl;
    }
    return 0;
}