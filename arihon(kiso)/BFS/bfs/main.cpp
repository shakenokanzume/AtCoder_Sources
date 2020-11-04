#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

const vector<int> di = {-1, 0, 1, 0};
const vector<int> dj = {0, 1, 0, -1};

int main(){
    int H, W;
    cin >> H >> W;
    pair<int, int> s, g;
    int si, sj, gi, gj;
    cin >> si >> sj;
    cin >> gi >> gj;
    si--, sj--, gi--, gj--;
    s = make_pair(si, sj);
    g = make_pair(gi, gj);
    queue<pair<int, int>> q;
    vector<vector<int>> dist(H, vector<int>(W, -1));
    vector<vector<char>> c(H, vector<char>(W));
    rep(i, H) rep(j, W) cin >> c[i][j];
    int ans = lim;

    dist[s.first][s.second] = 0;
    q.push(s);
    while(!q.empty()){
        pair<int, int> v;
        v = q.front();
        int vi, vj;
        vi = v.first, vj = v.second;
        q.pop();

        rep(i, 4){
            int ni = vi + di[i];
            int nj = vj + dj[i];
            if(ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
            if(c[ni][nj] == '#') continue;
            if(dist[ni][nj] != -1) continue;
            dist[ni][nj] = dist[vi][vj] + 1;
            if(ni == g.first && nj == g.second){
                ans = dist[ni][nj];
                break;
            }
            q.emplace(ni, nj);
        }
    }
    cout << ans << endl;
    return 0;
}