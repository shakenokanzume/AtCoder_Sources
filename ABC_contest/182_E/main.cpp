#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; i++)

const int lim = 1000000007;

const vector<int> di = {-1, 0, 1, 0};
const vector<int> dj = {0, 1, 0, -1};

int main()
{
    int H, W, N, M;
    cin >> H >> W >> N >> M;
    //明かりが届きそうな座標を入れていく
    queue<pair<pair<int, int>, int>> q;
    //そのマスが明かりがともっているか格納
    vector<vector<bool>> is(H, vector<bool>(W, false));
    //電灯のある場所には'-'を、ブロックのある場所には'#'を、何もない場所には'.'を格納
    vector<vector<char>> s(H, vector<char>(W, '.'));
    //入力
    //電灯の場所を格納
    vector<int> l_h(N);
    vector<int> l_w(N);
    rep(i, N)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        l_h[i] = a;
        l_w[i] = b;
    }
    //ブロックの場所格納
    rep(i, M)
    {
        int c, d;
        cin >> c >> d;
        c--, d--;
        s[c][d] = '#';
    }

    //各電球から開始するBFSを考える
    rep(i, N)
    {
        is[l_h[i]][l_w[i]] = true;
        //電球から始める時は、fromは4とする
        q.emplace(make_pair(l_h[i], l_w[i]), 4);
        while (!q.empty())
        {
            int vi = q.front().first.first;
            int vj = q.front().first.second;
            int from = q.front().second;
            q.pop();
            if (from == 4)
            {
                rep(j, 4)
                {
                    int ni = vi + di[j];
                    int nj = vj + dj[j];
                    if(ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
                    if(s[ni][nj] == '#') continue;
                    is[ni][nj] = true;
                    q.emplace(make_pair(ni, nj), j);
                }
            }else{
                int ni = vi + di[from];
                int nj = vj + dj[from];
                if(ni < 0 || ni >= H || nj < 0 || nj >= W) continue;
                if(s[ni][nj] == '#') continue;
                is[ni][nj] = true;
                q.emplace(make_pair(ni, nj), from);
            }
        }
    }
    //光の届いているマスのカウント
    ll ans = 0;
    rep(i, H){ 
        rep(j, W){
            if(is[i][j]) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}