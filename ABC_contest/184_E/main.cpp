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
    queue<pair<int, int>> q;
    vector<vector<int>> dist(H, vector<int>(W, lim));
    vector<vector<char>> c(H, vector<char>(W));
    // 各アルファベットの書いてあるテレポータ―の位置を格納
    vector<vector<pair<int, int>>> tel(26);
    rep(i, H) rep(j, W) cin >> c[i][j];
    int ans = lim;

    // スタート、ゴールの点の格納
    // テレポータ―の位置を、アルファベット別に格納
    int si, sj, gi, gj;
    pair<int, int> s, g;
    rep(i, H){
        rep(j, W){
            if(c[i][j] == 'S') si = i, sj = j;
            if(c[i][j] == 'G') gi = i, gj = j;
            char now_word = c[i][j];
            if (now_word != 'S' && now_word != 'G' && now_word != '.' && now_word != '#'){
                tel[now_word - 'a'].emplace_back(i, j);
            }
        }
    }
    s = make_pair(si, sj);
    g = make_pair(gi, gj);

    dist[si][sj] = 0;
    q.push(s);
    while (!q.empty())
    {
        pair<int, int> v;
        v = q.front();
        int vi, vj;
        vi = v.first, vj = v.second;
        q.pop();

        // 隣接する上下左右マスを探索する
        rep(i, 4)
        {
            int ni = vi + di[i];
            int nj = vj + dj[i];
            if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                continue;
            if (c[ni][nj] == '#')
                continue;
            if (dist[ni][nj] <= dist[vi][vj] + 1)
                continue;
            dist[ni][nj] = dist[vi][vj] + 1;

            if (ni == g.first && nj == g.second)
            {
                ans = dist[ni][nj];
                continue;
            }
            q.emplace(ni, nj);
        }

        // テレポートによる移動での探索
        char now_word = c[vi][vj];
        if(now_word != 'S' && now_word != 'G' && now_word != '.' && now_word != '#'){
            for(auto p : tel[now_word - 'a']){
                int ni = p.first;
                int nj = p.second;
                if (ni < 0 || ni >= H || nj < 0 || nj >= W)
                    continue;
                if (c[ni][nj] == '#')
                    continue;
                if (dist[ni][nj] <= dist[vi][vj] + 1)
                    continue;
                dist[ni][nj] = dist[vi][vj] + 1;
                if (ni == g.first && nj == g.second)
                {
                    ans = dist[ni][nj];
                    continue;
                }
                q.emplace(ni, nj);
            }
        }

    }
    if(ans != lim) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}