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
    //直近黒に塗られたパネルの座標を入れていく
    queue<pair<int, int>> q;
    //そのパネルはすでに黒色であるかを格納
    vector<vector<bool>> is(H, vector<bool>(W, false));
    vector<vector<char>> c(H, vector<char>(W));
    //初期状態での黒マスの個数
    int b_cnt = 0;
    //求める操作回数
    int ans = 0;
    rep(i, H)
    {
        rep(j, W)
        {
            cin >> c[i][j];
            if (c[i][j] == '#'){
                b_cnt++;
                q.emplace(i, j);
                is[i][j] = true;
            }
        }
    }

    //周期性の基本となる座標
    pair<int, int> start_point = q.front();
    while (b_cnt != H*W)
    {
        //今回は今から見る黒色パネルの座標(i, j)がvである
        pair<int, int> v;
        v = q.front();
        q.pop();
        int vi, vj;
        vi = v.first, vj = v.second;
        if (v == start_point){
            ans++;
            q.emplace(vi, vj);
        }

        rep(i, 4)
        {
            int ni = vi + di[i];
            int nj = vj + dj[i];
            if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                continue;
            if (is[ni][nj])
                continue;
            is[ni][nj] = true;
            b_cnt++;
            q.emplace(ni, nj);
        }
    }
    cout << ans << endl;
    return 0;
}