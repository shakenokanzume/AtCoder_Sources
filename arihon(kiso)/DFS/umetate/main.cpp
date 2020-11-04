#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, n) for(int i = 0; i < n; i++)

const int lim = 1000000007;

const vector<int> di = {-1, 0, 1, 0};
const vector<int> dj = {0, 1, 0, -1};

//もともとの島の数
int num;
//つながっている島の数カウンター
int cnt;
vector<vector<char>> s(10, vector<char>(10));
vector<vector<bool>> seen(10, vector<bool>(10));

void dfs(int vi, int vj){
    seen[vi][vj] = true;
    cnt++;
    rep(i, 4){
        int ni = vi + di[i];
        int nj = vj + dj[i];
        if(ni < 0 || ni >= 10 || nj < 0 || nj >= 10) continue;
        if(seen[ni][nj] == true) continue;
        if(s[ni][nj] == 'x') continue;
        dfs(ni, nj);
    }
}

int main(){
    rep(i, 10){
        rep(j, 10){
            cin >> s[i][j];
            if(s[i][j] == 'o') num++;
        }
    }
    num++;

    vector<vector<bool>> seen_cpy(10, vector<bool>(10));
    seen_cpy = seen;
    //埋め立てする座標の決定
    rep(i, 10){
        rep(j, 10){
            char sinbol = s[i][j];
            s[i][j] = 'o';
            //つながっている陸地の数を数える
            cnt = 0;
            dfs(i, j);
            seen = seen_cpy;
            s[i][j] = sinbol;
            if(num == cnt){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}