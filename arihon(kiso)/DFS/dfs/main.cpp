#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

int H, W;
const vector<int> di = {-1, 0, 1, 0};
const vector<int> dj = {0, 1, 0, -1};
vector<string> s;
vector<vector<bool>> seen;
bool ans = false;

void dfs(int vi, int vj){
    seen[vi][vj] = 1;
    if(s[vi][vj] == 'g') ans = true;
    rep(i, 4){
        int ni = vi + di[i];
        int nj = vj + dj[i];
        if(ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
        if(s[ni][nj] == '#') continue;
        if(seen[ni][nj] != false) continue;
        dfs(ni, nj);
    }
}

int main(){
    cin >> H >> W;
    s.resize(H);
    seen.resize(H);
    rep(i, H){
        cin >> s[i];
        seen[i].resize(W);
    }

    int start_i, start_j;
    rep(i, H){
        rep(j, W){
            seen[i][j] = false;
            if(s[i].at(j) == 's'){
                start_i = i;
                start_j = j;
            }
        }
    }

    dfs(start_i, start_j);
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}